#include "two_arrays.h"
#include <unordered_set>
#include <algorithm>

bool isCommonElementPresent(std::vector<int> arr_1, std::vector<int> arr_2) {
  std::unordered_set<int> final;
  for (size_t i = 0; i < arr_1.size(); i++) {
    if (!final.insert(arr_1[i]).second) {
      return true;
    }
  }

  for (size_t i = 0; i < arr_2.size(); i++) {
    if (!final.insert(arr_2[i]).second) {
      return true;
    }
  }
return false;
}

int main() {
  auto arr_1 = std::vector<int>{1, 2, 3, 4, 5, 6};
  auto arr_2 = std::vector<int>{7, 2, 8, 9, 11, 12};

  if (isCommonElementPresent(arr_1, arr_2))
  {
    std::cout << "Found " << std::endl;
  }
  else
  {
    std::cout << "Not found " << std::endl;
  }
  return 0;
}
