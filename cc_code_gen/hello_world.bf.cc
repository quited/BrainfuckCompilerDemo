// Generate by cc_code_gen
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


auto Compute(std::vector<CellType>& memory) -> void {
	size_t ptr_pos = 0;
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	while(memory[ptr_pos]){ 
		ptr_pos++; 
		memory[ptr_pos]++; 
		ptr_pos++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		ptr_pos++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		ptr_pos++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		memory[ptr_pos]++; 
		ptr_pos--; 
		ptr_pos--; 
		ptr_pos--; 
		ptr_pos--; 
		memory[ptr_pos]--; 
		} 
	ptr_pos++; 
	ptr_pos++; 
	ptr_pos++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	std::wcout<<memory[ptr_pos]; 
	ptr_pos++; 
	memory[ptr_pos]++; 
	std::wcout<<memory[ptr_pos]; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	std::wcout<<memory[ptr_pos]; 
	std::wcout<<memory[ptr_pos]; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	std::wcout<<memory[ptr_pos]; 
	ptr_pos--; 
	ptr_pos--; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	std::wcout<<memory[ptr_pos]; 
	ptr_pos++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	std::wcout<<memory[ptr_pos]; 
	ptr_pos++; 
	std::wcout<<memory[ptr_pos]; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	memory[ptr_pos]++; 
	std::wcout<<memory[ptr_pos]; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	std::wcout<<memory[ptr_pos]; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	memory[ptr_pos]--; 
	std::wcout<<memory[ptr_pos]; 
	ptr_pos--; 
	ptr_pos--; 
	memory[ptr_pos]++; 
	std::wcout<<memory[ptr_pos]; 
	ptr_pos--; 
	std::wcout<<memory[ptr_pos]; 
}