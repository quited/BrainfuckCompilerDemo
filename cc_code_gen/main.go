package main

import (
	"errors"
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

const programTemplate = `// Generate by cc_code_gen
#include <iostream>
#include <cstdint>
#include <vector>

using CellType = wchar_t;

const size_t kMemorySize = 65535;

auto Compute(std::vector<CellType>& memory) -> void ;

auto main() -> int{
	auto memory=std::vector<CellType>();
	memory.resize(kMemorySize);
	Compute(memory);
	return EXIT_SUCCESS;
}

`

func compileBf(input string) (res string, err error) {
	res = programTemplate

	functionCompute := `
auto Compute(std::vector<CellType>& memory) -> void {
	size_t ptr_pos = 0;
`

	lBuckets := 0

	addTabs := func() {
		functionCompute += `	`
		for i := 0; i < lBuckets; i++ {
			functionCompute += `	`
		}
	}

	for _, ch := range input {
		switch ch {
		case '>':
			addTabs()
			functionCompute += "ptr_pos++; \n"
		case '<':
			addTabs()
			functionCompute += "ptr_pos--; \n"
		case '+':
			addTabs()
			functionCompute += "memory[ptr_pos]++; \n"
		case '-':
			addTabs()
			functionCompute += "memory[ptr_pos]--; \n"
		case ',':
			addTabs()
			functionCompute += "std::wcin>>memory[ptr_pos]; \n"
		case '.':
			addTabs()
			functionCompute += "std::wcout<<memory[ptr_pos]; \n"
		case '[':
			addTabs()
			lBuckets++
			functionCompute += "while(memory[ptr_pos]){ \n"
		case ']':
			addTabs()
			lBuckets--
			functionCompute += "} \n"
		}
	}

	functionCompute += `}`

	res += functionCompute

	if lBuckets != 0 {
		err = errors.New("compilation error")
	}
	return
}

func main() {
	args := os.Args
	if len(args) != 2 {
		fmt.Printf("Usage: %s filename\n", args[0])
		return
	}
	filename := args[1]
	fileContents, err := ioutil.ReadFile(filename)
	if err != nil {
		log.Panicf("error reading %s\n", filename)
		return
	}
	program, err := compileBf(string(fileContents))
	if err != nil {
		log.Panicln(err)
		return
	}
	err = ioutil.WriteFile(filename+".cc", []byte(program), 0666)
	if err != nil {
		log.Panicln(err)
	}
}
