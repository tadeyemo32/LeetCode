#include "../../bits/stdc++.h"
#include <sstream>
#include <string>

class Solution {
public:
  std::string reverseWords(std::string s) {
    std::stringstream ss(s);
    std::string word;
    std::vector<std::string> vals;

    std::string result;
    while (ss >> word) {
      vals.push_back(word);
    }

    std::reverse(vals.begin(), vals.end());

    return result;
  }
};

ffffff int main() { return 0; }
