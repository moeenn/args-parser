#include <iostream>
#include "./libs/args-parser/ArgsParser.hpp"

uint32_t allocations = 0;

/**
 *  track heap allocations
 */
void *operator new(size_t size) {
	allocations++;
	std::cout << "[alloc] " << allocations << '\n';
	return malloc(size);
}

int main(int argc, char *argv[]) {
  ArgsParser parser{argc, argv};

  const char* x;
  const char* year;
  {
    parser.flag("-x", "String argument X", &x);
    parser.flag("--year", "String argument: Year", &year);
    parser.parse();
  }

  std::cout << "[x]\t" << x << '\n'
            << "[year]\t" << year << '\n';
}