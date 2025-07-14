#include <string>
#include <map>
#include <iostream>
using namespace std;

class Solution
{
public:
  bool isValid(string s)
  {
    map<char, int> bracketPairs = {
        {'}', 0},
        {')', 0},
        {']', 0},
        {'{', 0},
        {'(', 0},
        {'[', 0},
    };

    map<char, char> pair = {
        {'}', '{'},
        {')', ')'},
        {']', '['},
        {'{', '}'},
        {'(', ')'},
        {'[', ']'},
    };

    for (int i = 0; i < s.length(); i++)

    {
      char c = s[i];
      if (i + 1 != s.length())
      {
        char next = s[i + 1];
        if (pair[c] != next)
        {
          return false;
        }
      }

      bracketPairs[c] += 1;
    }

    if (bracketPairs['}'] == bracketPairs['{'] && bracketPairs['('] == bracketPairs[')'] && bracketPairs['['] == bracketPairs[']'])
    {

      return true;
    }

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
