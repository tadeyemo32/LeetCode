# 20. Valid Parentheses

## Problem Description

Given a string `s` consisting only of the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is **valid**.

A string is considered valid if all the following conditions are met:

- Every **opening bracket** must be closed by the **same type** of bracket.
- Every opening bracket must be closed in the **correct order**.
- Every closing bracket must have a **corresponding opening bracket** of the same type before it.

In other words, brackets must properly open and close like in a well-formed expression.

---

## Examples

| Input       | Output | Explanation                                 |
| ----------- | ------ | ------------------------------------------- |
| `"()"`      | `true` | Simple pair of parentheses, properly closed |
| `"()[]{}"`  | `true` | Multiple types of brackets properly closed  |
| `"(]"`      | `false`| Closing bracket does not match opening      |
| `"([])"`    | `true` | Nested brackets properly matched            |

---

## Constraints

- `1 <= s.length <= 10^4`
- The string `s` consists **only** of the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`.

---

## Hint

A classic approach to solve this problem is to use a **stack**:

- When you see an opening bracket, push it onto the stack.
- When you see a closing bracket, check if the top of the stack has the matching opening bracket.
- If it does, pop it and continue.
- Otherwise, the string is invalid.
- At the end, if the stack is empty, the string is valid.

---

## How to Use

- Implement a function `bool isValid(string s)` that returns `true` or `false` according to the problem statement.
- Test your solution with the given examples and additional edge cases such as empty strings or strings with only one bracket.

---

## Example Code Skeleton (C++)

```cpp
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // Your code here
    }
};
