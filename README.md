# console colors
A C++ library for easily parsing command line flags

## Usage
```c++
#include <iostream>
#include "./libs/args-parser/ArgsParser.hpp"

int main(int argc, char *argv[]) {
  ArgsParser parser{argc, argv};

  std::string x;
  std::string year;
  {
    parser.flag("-x", "String argument X", &x);
    parser.flag("--year", "String argument: Year", &year);
    parser.parse();
  }
}
```

## Compilation
The library includes a header file and a source file, both located in ```src/libs/args-parser```. Make sure the source file is included when building your project. See ```CMakeLists.txt``` for more information.