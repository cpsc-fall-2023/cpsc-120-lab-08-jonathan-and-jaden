// Jonathan Herrera
// jodahe10@csu.fullerton.edu
// @Jodahe10
// Partners: @jdragon050

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum{0};
  bool first{true};

  for (std::string& arg : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum += std::stod(arg);
  }

  double average{sum / (static_cast<double>(arguments.size() - 1))};

  std::cout << "average = " << average;
  return 0;
}
