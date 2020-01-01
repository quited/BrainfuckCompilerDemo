// Generated by cc_code_gen
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
	memory[ptr_pos] += (1); 
	ptr_pos += (2); 
	memory[ptr_pos] += (4); 
	while(memory[ptr_pos]) { 
		ptr_pos += (-1); 
		memory[ptr_pos] += (4); 
		ptr_pos += (1); 
		memory[ptr_pos] += (-1); 
	} 
	ptr_pos += (-1); 
	while(memory[ptr_pos]) { 
		ptr_pos += (-1); 
		memory[ptr_pos] += (6); 
		ptr_pos += (1); 
		memory[ptr_pos] += (-1); 
	} 
	memory[ptr_pos] += (1); 
	while(memory[ptr_pos]) { 
		ptr_pos += (-1); 
		while(memory[ptr_pos]) { 
			ptr_pos += (4); 
			memory[ptr_pos] += (1); 
			ptr_pos += (-4); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (4); 
		while(memory[ptr_pos]) { 
			ptr_pos += (-4); 
			memory[ptr_pos] += (1); 
			ptr_pos += (6); 
			memory[ptr_pos] += (1); 
			ptr_pos += (-2); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (-1); 
		memory[ptr_pos] += (4); 
		while(memory[ptr_pos]) { 
			ptr_pos += (1); 
			memory[ptr_pos] += (8); 
			ptr_pos += (-1); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (1); 
		std::wcout << memory[ptr_pos]; 
		while(memory[ptr_pos]) { 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (-1); 
		memory[ptr_pos] += (3); 
		while(memory[ptr_pos]) { 
			ptr_pos += (1); 
			memory[ptr_pos] += (3); 
			ptr_pos += (-1); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (1); 
		memory[ptr_pos] += (1); 
		while(memory[ptr_pos]) { 
			ptr_pos += (2); 
			std::wcout << memory[ptr_pos]; 
			memory[ptr_pos] += (1); 
			ptr_pos += (-2); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (2); 
		while(memory[ptr_pos]) { 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (-3); 
		memory[ptr_pos] += (2); 
		while(memory[ptr_pos]) { 
			ptr_pos += (-1); 
			memory[ptr_pos] += (5); 
			ptr_pos += (1); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (-1); 
		std::wcout << memory[ptr_pos]; 
		ptr_pos += (-2); 
		while(memory[ptr_pos]) { 
			ptr_pos += (4); 
			memory[ptr_pos] += (1); 
			ptr_pos += (-4); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (4); 
		while(memory[ptr_pos]) { 
			ptr_pos += (-4); 
			memory[ptr_pos] += (1); 
			ptr_pos += (6); 
			memory[ptr_pos] += (1); 
			ptr_pos += (-2); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (-2); 
		while(memory[ptr_pos]) { 
			ptr_pos += (4); 
			std::wcout << memory[ptr_pos]; 
			memory[ptr_pos] += (1); 
			ptr_pos += (-3); 
			memory[ptr_pos] += (10); 
			while(memory[ptr_pos]) { 
				ptr_pos += (-1); 
				while(memory[ptr_pos]) { 
					ptr_pos += (2); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-2); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (2); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-2); 
					memory[ptr_pos] += (1); 
					ptr_pos += (5); 
					memory[ptr_pos] += (11); 
					ptr_pos += (-3); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-1); 
				while(memory[ptr_pos]) { 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-1); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (1); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (4); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-3); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (3); 
				while(memory[ptr_pos]) { 
					ptr_pos += (12); 
					memory[ptr_pos] += (1); 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-13); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (12); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (3); 
				} 
				ptr_pos += (3); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-3); 
					memory[ptr_pos] += (1); 
					ptr_pos += (3); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-3); 
				while(memory[ptr_pos]) { 
					ptr_pos += (2); 
					memory[ptr_pos] += (1); 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-3); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (1); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-4); 
				} 
				ptr_pos += (-1); 
				memory[ptr_pos] += (9); 
				while(memory[ptr_pos]) { 
					ptr_pos += (1); 
					memory[ptr_pos] += (5); 
					ptr_pos += (-1); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (2); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-2); 
					memory[ptr_pos] += (1); 
					ptr_pos += (2); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-2); 
				while(memory[ptr_pos]) { 
					ptr_pos += (1); 
					memory[ptr_pos] += (-3); 
					ptr_pos += (-1); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (1); 
				std::wcout << memory[ptr_pos]; 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-17); 
				memory[ptr_pos] += (-1); 
			} 
			memory[ptr_pos] += (10); 
			std::wcout << memory[ptr_pos]; 
			while(memory[ptr_pos]) { 
				memory[ptr_pos] += (-1); 
			} 
			ptr_pos += (-1); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (4); 
		while(memory[ptr_pos]) { 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (-1); 
		while(memory[ptr_pos]) { 
			memory[ptr_pos] += (-1); 
		} 
		memory[ptr_pos] += (8); 
		while(memory[ptr_pos]) { 
			ptr_pos += (1); 
			memory[ptr_pos] += (8); 
			ptr_pos += (-1); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (1); 
		memory[ptr_pos] += (-2); 
		std::wcout << memory[ptr_pos]; 
		while(memory[ptr_pos]) { 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (-1); 
		std::wcin >> memory[ptr_pos]; 
		memory[ptr_pos] += (-10); 
		while(memory[ptr_pos]) { 
			ptr_pos += (-1); 
			memory[ptr_pos] += (1); 
			ptr_pos += (1); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (6); 
		memory[ptr_pos] += (1); 
		ptr_pos += (-7); 
		while(memory[ptr_pos]) { 
			ptr_pos += (1); 
			memory[ptr_pos] += (1); 
			ptr_pos += (5); 
			memory[ptr_pos] += (1); 
			ptr_pos += (1); 
			while(memory[ptr_pos]) { 
				memory[ptr_pos] += (-1); 
			} 
			ptr_pos += (-7); 
			memory[ptr_pos] += (-1); 
		} 
		ptr_pos += (1); 
		memory[ptr_pos] += (10); 
		ptr_pos += (5); 
		while(memory[ptr_pos]) { 
			while(memory[ptr_pos]) { 
				memory[ptr_pos] += (-1); 
			} 
			ptr_pos += (-2); 
			std::wcin >> memory[ptr_pos]; 
			ptr_pos += (-7); 
			memory[ptr_pos] += (-1); 
			ptr_pos += (7); 
			while(memory[ptr_pos]) { 
				ptr_pos += (-4); 
				memory[ptr_pos] += (1); 
				ptr_pos += (4); 
				memory[ptr_pos] += (-1); 
			} 
			ptr_pos += (-4); 
			while(memory[ptr_pos]) { 
				ptr_pos += (4); 
				memory[ptr_pos] += (1); 
				ptr_pos += (1); 
				memory[ptr_pos] += (1); 
				ptr_pos += (-5); 
				memory[ptr_pos] += (-1); 
			} 
			ptr_pos += (5); 
			memory[ptr_pos] += (-10); 
			while(memory[ptr_pos]) { 
				ptr_pos += (-8); 
				memory[ptr_pos] += (1); 
				ptr_pos += (-1); 
				while(memory[ptr_pos]) { 
					ptr_pos += (4); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-4); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (4); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-4); 
					memory[ptr_pos] += (1); 
					ptr_pos += (6); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-2); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (1); 
				while(memory[ptr_pos]) { 
					ptr_pos += (1); 
					memory[ptr_pos] += (-1); 
					ptr_pos += (-1); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (1); 
				memory[ptr_pos] += (10); 
				while(memory[ptr_pos]) { 
					ptr_pos += (1); 
					memory[ptr_pos] += (11); 
					ptr_pos += (-1); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-6); 
				while(memory[ptr_pos]) { 
					ptr_pos += (4); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-4); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (4); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-4); 
					memory[ptr_pos] += (1); 
					ptr_pos += (6); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-2); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (4); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-2); 
					memory[ptr_pos] += (-1); 
					ptr_pos += (2); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-2); 
				memory[ptr_pos] += (10); 
				while(memory[ptr_pos]) { 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-1); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (1); 
				while(memory[ptr_pos]) { 
					ptr_pos += (12); 
					memory[ptr_pos] += (1); 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-13); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (12); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (3); 
				} 
				ptr_pos += (3); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-3); 
					memory[ptr_pos] += (1); 
					ptr_pos += (3); 
					memory[ptr_pos] += (-1); 
				} 
				memory[ptr_pos] += (1); 
				ptr_pos += (-3); 
				while(memory[ptr_pos]) { 
					ptr_pos += (3); 
					memory[ptr_pos] += (-1); 
					ptr_pos += (-3); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (1); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-4); 
				} 
				ptr_pos += (-11); 
				std::wcin >> memory[ptr_pos]; 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
				} 
			} 
			ptr_pos += (1); 
		} 
		ptr_pos += (1); 
		while(memory[ptr_pos]) { 
			memory[ptr_pos] += (10); 
			while(memory[ptr_pos]) { 
				ptr_pos += (1); 
				memory[ptr_pos] += (11); 
				ptr_pos += (1); 
				memory[ptr_pos] += (11); 
				ptr_pos += (-2); 
				memory[ptr_pos] += (-1); 
			} 
			ptr_pos += (1); 
			while(memory[ptr_pos]) { 
				memory[ptr_pos] += (-1); 
				while(memory[ptr_pos]) { 
					ptr_pos += (3); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-3); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (3); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-3); 
					memory[ptr_pos] += (1); 
					ptr_pos += (7); 
					memory[ptr_pos] += (1); 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-5); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (4); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (3); 
				} 
				ptr_pos += (3); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-3); 
					memory[ptr_pos] += (1); 
					ptr_pos += (3); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-3); 
				while(memory[ptr_pos]) { 
					ptr_pos += (2); 
					memory[ptr_pos] += (1); 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-3); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (1); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-4); 
				} 
				ptr_pos += (-8); 
				while(memory[ptr_pos]) { 
					ptr_pos += (3); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-3); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (3); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-3); 
					memory[ptr_pos] += (1); 
					ptr_pos += (7); 
					memory[ptr_pos] += (1); 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-5); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-2); 
				while(memory[ptr_pos]) { 
					ptr_pos += (2); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-2); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (2); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-2); 
					memory[ptr_pos] += (1); 
					ptr_pos += (6); 
					memory[ptr_pos] += (1); 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-5); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (4); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (2); 
				} 
				ptr_pos += (3); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-1); 
				while(memory[ptr_pos]) { 
					ptr_pos += (1); 
					memory[ptr_pos] += (1); 
					ptr_pos += (-1); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-1); 
				while(memory[ptr_pos]) { 
					memory[ptr_pos] += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (4); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-4); 
				} 
				ptr_pos += (-8); 
			} 
			ptr_pos += (-10); 
			memory[ptr_pos] += (10); 
			while(memory[ptr_pos]) { 
				ptr_pos += (1); 
				memory[ptr_pos] += (10); 
				while(memory[ptr_pos]) { 
					ptr_pos += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (2); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-2); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (2); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-2); 
						memory[ptr_pos] += (1); 
						ptr_pos += (5); 
						memory[ptr_pos] += (11); 
						ptr_pos += (-3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (1); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-1); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-1); 
						memory[ptr_pos] += (1); 
						ptr_pos += (4); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (5); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-8); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (9); 
					while(memory[ptr_pos]) { 
						ptr_pos += (2); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-2); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (2); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-2); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-1); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					memory[ptr_pos] += (-12); 
					while(memory[ptr_pos]) { 
						ptr_pos += (3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (7); 
						memory[ptr_pos] += (1); 
						ptr_pos += (1); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-5); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (4); 
					while(memory[ptr_pos]) { 
						memory[ptr_pos] += (-1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (-4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (-4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (3); 
					} 
					ptr_pos += (3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (2); 
						memory[ptr_pos] += (1); 
						ptr_pos += (1); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (7); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-5); 
						memory[ptr_pos] += (1); 
						ptr_pos += (2); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (7); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-9); 
						memory[ptr_pos] += (1); 
						ptr_pos += (6); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-7); 
					while(memory[ptr_pos]) { 
						memory[ptr_pos] += (-1); 
						ptr_pos += (1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (-4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (-1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (-4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (-4); 
					} 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-7); 
						memory[ptr_pos] += (1); 
						ptr_pos += (7); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-9); 
					memory[ptr_pos] += (11); 
					while(memory[ptr_pos]) { 
						ptr_pos += (3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (7); 
						memory[ptr_pos] += (1); 
						ptr_pos += (1); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-5); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (4); 
					while(memory[ptr_pos]) { 
						memory[ptr_pos] += (-1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (-4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (-4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (3); 
					} 
					ptr_pos += (3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (2); 
						memory[ptr_pos] += (1); 
						ptr_pos += (1); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (7); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-5); 
						memory[ptr_pos] += (1); 
						ptr_pos += (2); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (7); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-9); 
						memory[ptr_pos] += (1); 
						ptr_pos += (6); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-7); 
					while(memory[ptr_pos]) { 
						memory[ptr_pos] += (-1); 
						ptr_pos += (1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (-4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (-1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (-4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (-4); 
					} 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-7); 
						memory[ptr_pos] += (1); 
						ptr_pos += (7); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-9); 
					memory[ptr_pos] += (11); 
					while(memory[ptr_pos]) { 
						ptr_pos += (7); 
						memory[ptr_pos] += (1); 
						ptr_pos += (1); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-8); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (7); 
					while(memory[ptr_pos]) { 
						memory[ptr_pos] += (-1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (-4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (-4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (3); 
					} 
					ptr_pos += (3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (2); 
						memory[ptr_pos] += (1); 
						ptr_pos += (1); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (7); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-5); 
						memory[ptr_pos] += (1); 
						ptr_pos += (2); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (7); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (3); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-3); 
					while(memory[ptr_pos]) { 
						ptr_pos += (3); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-9); 
						memory[ptr_pos] += (1); 
						ptr_pos += (6); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-7); 
					while(memory[ptr_pos]) { 
						memory[ptr_pos] += (-1); 
						ptr_pos += (1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (-4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (-1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (-4); 
							memory[ptr_pos] += (1); 
							ptr_pos += (4); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (-4); 
					} 
					ptr_pos += (1); 
					while(memory[ptr_pos]) { 
						ptr_pos += (-7); 
						memory[ptr_pos] += (1); 
						ptr_pos += (7); 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-7); 
					memory[ptr_pos] += (-4); 
					while(memory[ptr_pos]) { 
						ptr_pos += (7); 
						memory[ptr_pos] += (1); 
						ptr_pos += (-7); 
						memory[ptr_pos] += (1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (7); 
							memory[ptr_pos] += (-1); 
							ptr_pos += (-7); 
							while(memory[ptr_pos]) { 
								memory[ptr_pos] += (-1); 
							} 
						} 
						ptr_pos += (-7); 
						while(memory[ptr_pos]) { 
							ptr_pos += (12); 
							memory[ptr_pos] += (1); 
							ptr_pos += (1); 
							memory[ptr_pos] += (1); 
							ptr_pos += (-13); 
							memory[ptr_pos] += (-1); 
						} 
						while(memory[ptr_pos]) { 
							std::wcout << memory[ptr_pos]; 
							std::wcout << memory[ptr_pos]; 
						} 
						ptr_pos += (12); 
						while(memory[ptr_pos]) { 
							memory[ptr_pos] += (-1); 
							while(memory[ptr_pos]) { 
								ptr_pos += (4); 
								memory[ptr_pos] += (1); 
								ptr_pos += (-4); 
								memory[ptr_pos] += (-1); 
							} 
							ptr_pos += (1); 
							while(memory[ptr_pos]) { 
								ptr_pos += (4); 
								memory[ptr_pos] += (1); 
								ptr_pos += (-4); 
								memory[ptr_pos] += (-1); 
							} 
							ptr_pos += (1); 
							while(memory[ptr_pos]) { 
								ptr_pos += (4); 
								memory[ptr_pos] += (1); 
								ptr_pos += (-4); 
								memory[ptr_pos] += (-1); 
							} 
							ptr_pos += (2); 
						} 
						ptr_pos += (3); 
						while(memory[ptr_pos]) { 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (-1); 
						while(memory[ptr_pos]) { 
							ptr_pos += (1); 
							memory[ptr_pos] += (1); 
							ptr_pos += (-1); 
							memory[ptr_pos] += (-1); 
						} 
						ptr_pos += (-1); 
						while(memory[ptr_pos]) { 
							memory[ptr_pos] += (-1); 
							while(memory[ptr_pos]) { 
								ptr_pos += (-4); 
								memory[ptr_pos] += (1); 
								ptr_pos += (4); 
								memory[ptr_pos] += (-1); 
							} 
							ptr_pos += (-4); 
						} 
						ptr_pos += (-6); 
						while(memory[ptr_pos]) { 
							memory[ptr_pos] += (-1); 
						} 
					} 
					ptr_pos += (-7); 
					while(memory[ptr_pos]) { 
						memory[ptr_pos] += (-1); 
					} 
					ptr_pos += (-4); 
					memory[ptr_pos] += (-1); 
				} 
				ptr_pos += (-1); 
				memory[ptr_pos] += (-1); 
			} 
			ptr_pos += (11); 
			while(memory[ptr_pos]) { 
				memory[ptr_pos] += (-1); 
			} 
			ptr_pos += (-2); 
		} 
		ptr_pos += (-10); 
	} 
}