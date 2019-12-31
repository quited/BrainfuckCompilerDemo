package main

import (
	"bufio"
	"errors"
	"fmt"
	"io/ioutil"
	"os"
)

type Instruction struct {
	operator uint16
	operand  uint16
}

const (
	opIncDp = iota
	opDecDp
	opIncVal
	opDecVal
	opOut
	opIn
	opJmpFwd
	opJmpBck
)

const dataSize int = 65535

func compileBf(input string) (program []Instruction, err error) {
	var pc, jmpPc uint16 = 0, 0
	jmpStack := make([]uint16, 0)
	for _, c := range input {
		switch c {
		case '>':
			program = append(program, Instruction{opIncDp, 0})
		case '<':
			program = append(program, Instruction{opDecDp, 0})
		case '+':
			program = append(program, Instruction{opIncVal, 0})
		case '-':
			program = append(program, Instruction{opDecVal, 0})
		case '.':
			program = append(program, Instruction{opOut, 0})
		case ',':
			program = append(program, Instruction{opIn, 0})
		case '[':
			program = append(program, Instruction{opJmpFwd, 0})
			jmpStack = append(jmpStack, pc)
		case ']':
			if len(jmpStack) == 0 {
				return nil, errors.New("compilation error")
			}
			jmpPc = jmpStack[len(jmpStack)-1]
			jmpStack = jmpStack[:len(jmpStack)-1]
			program = append(program, Instruction{opJmpBck, jmpPc})
			program[jmpPc].operand = pc
		default:
			pc--
		}
		pc++
	}
	if len(jmpStack) != 0 {
		return nil, errors.New("compilation error")
	}
	return
}

func executeBf(program []Instruction) {
	data := make([]int16, dataSize)
	var dataPtr uint16 = 0
	reader := bufio.NewReader(os.Stdin)
	for pc := 0; pc < len(program); pc++ {
		switch program[pc].operator {
		case opIncDp:
			dataPtr++
		case opDecDp:
			dataPtr--
		case opIncVal:
			data[dataPtr]++
		case opDecVal:
			data[dataPtr]--
		case opOut:
			fmt.Printf("%c", data[dataPtr])
		case opIn:
			readVal, _ := reader.ReadByte()
			data[dataPtr] = int16(readVal)
		case opJmpFwd:
			if data[dataPtr] == 0 {
				pc = int(program[pc].operand)
			}
		case opJmpBck:
			if data[dataPtr] > 0 {
				pc = int(program[pc].operand)
			}
		default:
			panic("unknown operator")
		}
	}
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
		fmt.Printf("Error reading %s\n", filename)
		return
	}
	program, err := compileBf(string(fileContents))
	if err != nil {
		fmt.Println(err)
		return
	}
	executeBf(program)
}
