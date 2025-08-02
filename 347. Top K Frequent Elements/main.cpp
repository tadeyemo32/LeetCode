#include "../../bits/stdc++.h"

class Solution
{
public:
  vector<int> topKFrequent(vector<int> &nums, int k)
  {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
      mp[nums[i]]++;
    }
    priority_queue<pair<int, int>> mx;
    for (auto &i : mp)
    {
      mx.push({i.second, i.first});
    }

    vector<int> a;
    int count = 0;
    while (!mx.empty() && count < k)
    {
      a.push_back(mx.top().second);
      mx.pop();
      count++;
    }
    return a;
  }
};

int main()
{

  return 0;
}