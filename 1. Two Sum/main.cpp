#include "../../bits/stdc++.h"
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> vals;
    for (int i = 0; i < nums.size(); i++)
    {
      int complement = target - nums[i];
      if (vals.find(complement) != vals.end())
      {
        return {vals[complement], i};
      }
      vals[nums[i]] = i;
    }
    return {-1};
  }
};

int main()
{

  return 0;
}