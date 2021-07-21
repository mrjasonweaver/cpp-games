#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int add(std::vector<int> numbers, int sum) {

  for(int i = 0; i < numbers.size(); ++i) {
    sum = sum + numbers[i];
  }

  std::cout << sum << std::endl;

  return sum;
}

int main() {
  int sum = 0;  
  std::vector<int> numbers;

  std::copy_n(std::istream_iterator<int>(std::cin), 2, std::back_inserter(numbers));

  add(numbers, sum);

  return 0;
}