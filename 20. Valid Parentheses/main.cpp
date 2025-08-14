#include "../../bits/stdc++.h"


class Solution
{
public:
    unordered_map<char,char> checkChar = {
        {'[',']'},
        {']','['},
        {'(',')'},
        {')','('},
        {'{','}'},
        {'}','{'}, 
    };   
    stack<char> checker; 

    bool isValid(string s){
        string val;
   for(auto c : s){
     if(c=='('||c==')'||c=='['||c==']'||c=='{'||c=='}'){
        checker.push(c);
        val.push_back(c);
     }  

   }
    for(auto m:val){
        char expected =checkChar[m];
       if(expected ==){

       } 
    }

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
