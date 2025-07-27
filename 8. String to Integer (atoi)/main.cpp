#include "../../bits/stdc++.h"

class Solution
{
public:
  int myAtoi(string s)
  {
    int sign = 1;
    bool trail = false;
    vector<char> temp;

    for (int i = 0; i < s.length(); i++)
    {
      char curr = s[i];

      if (curr == ' ' && temp.empty())
      {
        continue;
      }

      if (curr == '-' || curr == '+')
      {
        if (!temp.empty())
          break;
        sign = (curr == '-') ? -1 : 1;
        if (i + 1 >= s.length() || !isdigit(s[i + 1]))
        {
          break;
        }
        continue;
      }

      if (!isdigit(curr))
      {
        break;
      }

      temp.push_back(curr);
    }

    long long result = 0;
    for (char c : temp)
    {
      result = result * 10 + (c - '0');

      if (result * sign > INT_MAX)
        return INT_MAX;
      if (result * sign < INT_MIN)
        return INT_MIN;
    }

    return result * sign;
  }
};

int main()
{
  string input = "Hello";
  Solution mySolution;
  int result = mySolution.myAtoi(input);

  cout << result << endl;

  return 0;
}