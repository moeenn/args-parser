#include <iostream>
#include "./ArgsParser.hpp"

void print_help() {
  std::cout << "usage: \n\n"
            << "-name\tName of the user\n"
            << "-year\tYear the user was born in\n"
            << "-help\tPrint this help message\n\n";
}

int main(int argc, char *argv[]) {
  ArgsParser parser{argc, argv};

  auto name = parser.String("-name");
  auto year = parser.Int("-year");
  auto help = parser.Bool("-help");

  if (help || !name || !year) {
    print_help();
    return 1;
  }

  std::cout << *year << '\n' << *name << '\n';
}
