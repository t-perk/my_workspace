#include <iostream>
#include <string>
#include <vector>

#include "absl/strings/str_join.h"

//#include "torch/script.h"

#include "cereal/cereal.hpp"

int main() {
  std::vector<std::string> v = {"foo", "bar", "baz"};
  std::string s = absl::StrJoin(v, "-");

  std::cout << "Joined string: " << s << "\n";

  return 0;
}
