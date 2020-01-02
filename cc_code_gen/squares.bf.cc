// Generated by cc_code_gen
#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

using CellType = wchar_t;

const size_t kMemorySize = 65535;

auto Compute(std::vector<CellType>& memory) -> void ;

auto Init(std::vector<CellType>& memory) -> void;

auto main() -> int{
	auto memory=std::vector<CellType>();
	memory.resize(kMemorySize);
	Init(memory);
	Compute(memory);
	return EXIT_SUCCESS;
}


auto Compute(std::vector<CellType>& memory) -> void {
	size_t ptr_pos = 0;
	memory[ptr_pos] += (4); 
	while(memory[ptr_pos]) { 
		ptr_pos += (1); 
		memory[ptr_pos] += (5); 
		ptr_pos += (-1); 
		memory[ptr_pos] += (-1); 
	} 
	ptr_pos += (1); 
	while(memory[ptr_pos]) { 
		ptr_pos += (-1); 
		memory[ptr_pos] += (5); 
		ptr_pos += (1); 
		memory[ptr_pos] += (-1); 
	} 
	memory[ptr_pos] += (1); 
	ptr_pos += (-1); 
	memory[ptr_pos] += (1); 
	while(memory[ptr_pos]) { 
		ptr_pos += (1); 
		while(memory[ptr_pos]) { 
			ptr_pos += (1); 
			memory[ptr_pos] += (1); 
			ptr_pos += (1); 
			memory[ptr_pos] += (1); 
			ptr_pos += (-2); 
			memory[ptr_pos] += (-1); 
		} 
		memory[ptr_pos] += (2); 
		ptr_pos += (2); 
		while(memory[ptr_pos]) { 
			ptr_pos += (-2); 
			memory[ptr_pos] += (1); 
			ptr_pos += (2); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (3); 
		while(memory[ptr_pos]) { 
			memory[ptr_pos] += (-1); 
		} 
		memory[ptr_pos] += (2); 
		ptr_pos += (1); 
		while(memory[ptr_pos]) { 
			memory[ptr_pos] += (-1); 
		} 
		memory[ptr_pos] += (1); 
		ptr_pos += (3); 
		memory[ptr_pos] += (1); 
		while(memory[ptr_pos]) { 
			while(memory[ptr_pos]) { 
				memory[ptr_pos] += (-1); 
			} 
			memory[ptr_pos] += (6); 
			ptr_pos += (3); 
		} 
		ptr_pos += (-3); 
		while(memory[ptr_pos]) { 
			while(memory[ptr_pos]) { 
				ptr_pos += (-1); 
				memory[ptr_pos] += (8); 
				ptr_pos += (-1); 
				memory[ptr_pos] += (2); 
				ptr_pos += (2); 
				memory[ptr_pos] += (-1); 
			} 
			memory[ptr_pos] += (1); 
			ptr_pos += (-1); 
			std::wcout << memory[ptr_pos]; 
			ptr_pos += (-1); 
			while(memory[ptr_pos]) { 
				ptr_pos += (1); 
				memory[ptr_pos] += (-4); 
				ptr_pos += (-1); 
				memory[ptr_pos] += (-1); 
			} 
			ptr_pos += (-1); 
		} 
		ptr_pos += (-2); 
		while(memory[ptr_pos]) { 
			ptr_pos += (5); 
			while(memory[ptr_pos]) { 
				ptr_pos += (3); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
				} 
				memory[ptr_pos] += (9); 
				ptr_pos += (-1); 
				while(memory[ptr_pos]) { 
					ptr_pos += (1); 
					memory[ptr_pos] += (-1); 
					ptr_pos += (-1); 
					memory[ptr_pos] += (-1); 
				} 
				memory[ptr_pos] += (9); 
				ptr_pos += (1); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-1); 
						memory[ptr_pos] += (-1); 
						ptr_pos += (1); 
						memory[ptr_pos] += (-1); 
					} 
					memory[ptr_pos] += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
					} 
				} 
				ptr_pos += (-1); 
				while(memory[ptr_pos]) { 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-1); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (1); 
			} 
			ptr_pos += (-2); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (-2); 
		memory[ptr_pos] += (-1); 
	} 
}
auto Init(std::vector<CellType>& memory) -> void{
}