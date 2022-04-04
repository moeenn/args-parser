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

  std::cout << "[x]\t" << x << '\n'
            << "[year]\t" << year << '\n';
}