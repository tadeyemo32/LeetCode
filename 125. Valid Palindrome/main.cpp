#include <iostream> 
#include <cctype> 
using namespace std;
class Solution{
    public :
    bool isPalindrome(string s) {
        
    string text;
    for(int i = 0;i<s.length();i++){
        if(isalnum(s[i])){
  text+= tolower(s[i]);
        }
      
        }


    
    int end = text.length()-1;
    int start = 0;
    while(start<end){
    if(text[start] != text[end]){
    return false;
    }
    end--;
    start++;
    }
return true;
    
    }



}; 


int main (){



    return 0 ; 



} 
