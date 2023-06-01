//Дано n целых чисел.Нужно найти два числа минимальной разницей между
//        ними.Вывести эту разницу.
//
//    1 < n < 100000
// 0 < значения чисел < 10000000

#include <iostream>
#include <cstdlib>
#include <set>

int main()
{
    int n = 0;
  while (1 >= n || n >= 100000) {
    std::cin >> n;
    if (n <= 1 || n >= 100000) {
      std::cout << "n must be in range of 1 to 100000" << std::endl;
    }
  }
  std::multiset<int> arr;
  int input;
  for (int i = 0; i < n; i++) {
      std::cin >> input;
      arr.insert(input);
  }
  int min_difference = 10000000;  // O(1)
  for (auto it = arr.begin(); it != --arr.end();) {
    int difference = std::abs(*it - *(++it));
    if (difference < min_difference) {
      min_difference = difference;
    }
    if (min_difference == 0) {
      break;
    }
  }



  //for (i = arr.begin(); i < arr.end(); i++) { //O(n)*x
  //  for (auto j = i+1; j < arr.end(); j++) { //O(n)*y sum = O(n^2/2)
  //      int difference = std::abs(*i - *j);
  //      if (difference < min_difference) {
  //        min_difference = difference;
  //      }
  //    }
  //}

  std::cout << "minimal difference is " << min_difference << std::endl;
    return 0;
}
