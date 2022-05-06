# args-parser
A C++ library for easily parsing command-line flags / arguments

## Usage
```c++
#include "./ArgsParser.hpp"

int main(int argc, char *argv[]) {
  ArgsParser parser{argc, argv};

  // return type: std::optional<std::string>
  auto name = parser.String("-name");

  // return type: std::optional<int>
  auto year = parser.Int("-year");

  // return type: bool
  auto help = parser.Bool("-help");

  if (help || !name || !year) {
    // print out the help message
    return 1;
  }

  std::cout << *year << '\n' << *name << '\n';
}
```

## Compilation
ArgsParser is a Headers-only library. This file can be included in your source files without requiring any additional build configuration.