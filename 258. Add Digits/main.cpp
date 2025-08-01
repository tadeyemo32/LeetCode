#include "../../bits/stdc++.h"

class Solution {
public:
  int addDigits(int num) {
    while (num >= 10) {
      int sum = 0;
      while (num != 0) {
        sum += num % 10;
        num /= 10;
      }
      num = sum;
    }
    return num;
  }
};

int main() {

  cout << 500049494 % 10;

  return 0;
}
