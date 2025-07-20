# LeetCode 268 - Missing Number

## Problem Statement
Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the only number in the range that is missing.

### Example 1:
Input: nums = [3, 0, 1]  
Output: 2

### Example 2:
Input: nums = [0, 1]  
Output: 2

### Example 3:
Input: nums = [9,6,4,2,3,5,7,0,1]  
Output: 8

## Constraints
- n == nums.length  
- 1 <= n <= 10⁴  
- 0 <= nums[i] <= n  
- All the numbers of nums are unique

## Intuition
The array contains numbers from 0 to n with one missing. The sum of all numbers from 0 to n is `n*(n+1)/2`. Subtracting the sum of elements in `nums` gives the missing number.

## Approach 1: Gauss’ Formula (Math-Based)
Use the formula for the sum of the first `n` natural numbers, then subtract the sum of the array.

```cpp
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expected = n * (n + 1) / 2;
    int actual = accumulate(nums.begin(), nums.end(), 0);
    return expected - actual;
}

