#include <string>
#include <map>
#include <iostream>
using namespace std;

class Solution
{
public:
  bool isValid(string s)
  {

    map<char, char> bracketPairs = {
        {'}', '{'},
        {')', '('},
        {']', '['}};

    return false;
  }
};

int main()
{
  Solution sol;
  cout << sol.isValid("()") << "\n";     // Expected: 1 (true)
  cout << sol.isValid("()[]{}") << "\n"; // Expected: 1 (true)
  cout << sol.isValid("(]") << "\n";     // Expected: 0 (false)
  cout << sol.isValid("([)]") << "\n";   // Expected: 0 (false)
  cout << sol.isValid("{[]}") << "\n";   // Expected: 1 (true)
  cout << sol.isValid("") << "\n";       // Expected: 1 (true)
}
