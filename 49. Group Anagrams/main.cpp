#include "../../bits/stdc++.h"
#include <algorithm>

class Solution
{
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs)
  {
    unordered_map<string, vector<string>> map;

    for (string s : strs)
    {
      string key = s;
      sort(key.begin(), key.end());
      map[key].push_back(s);
    }

    vector<vector<string>> solution;
    for (auto &entry : map)
    {
      solution.push_back(entry.second);
    }

    return solution;
  }
};

int main()
{

  return 0;
}