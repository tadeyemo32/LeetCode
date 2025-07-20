# LeetCode Problem 704 - Binary Search

## Problem Statement

Given an array of integers `nums` which is sorted in ascending order, and an integer `target`, write a function to search `target` in `nums`. If `target` exists, return its index. Otherwise, return `-1`.

You must write an algorithm with **O(log n)** runtime complexity.

### Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 < nums[i], target < 10^4`
- All the integers in `nums` are **unique**.
- `nums` is sorted in **ascending order**.

## Approach

This problem is a classic example of **binary search**, used when working with sorted arrays.

### Key Concepts:

- Start with two pointers: `low` at the beginning and `high` at the end of the array.
- Repeatedly narrow down the search range by comparing the `target` with the middle element:
  - If `target == nums[mid]`, return `mid`.
  - If `target < nums[mid]`, discard the right half by updating `high`.
  - If `target > nums[mid]`, discard the left half by updating `low`.
- The loop ends when `low > high`, which means the target was not found.
- This approach guarantees **O(log n)** time complexity and **O(1)** space complexity.

### Common Pitfalls:

- Misplacing `low` and `high` updates (e.g., setting `low = mid` instead of `mid + 1`).
- Using `high = nums.size()` instead of `nums.size() - 1` leads to index out-of-bound errors.
- Integer overflow when computing `mid`. Use `mid = low + (high - low) / 2`.

## Test Cases

| Input                  | Target | Expected Output |
|------------------------|--------|------------------|
| `[1,2,3,4,5,6]`        | `4`    | `3`              |
| `[-10,-3,0,5,9]`       | `9`    | `4`              |
| `[-10,-3,0,5,9]`       | `-3`   | `1`              |
| `[-10,-3,0,5,9]`       | `2`    | `-1`             |
| `[2,5]`                | `5`    | `1`              |
| `[2,5]`                | `2`    | `0`              |
| `[2,5]`                | `1`    | `-1`             |

## Test Result

All test cases passed with **O(log n)** time and **O(1)** space.

## Related Topics

- Binary Search
- Arrays
- Algorithm Optimization

