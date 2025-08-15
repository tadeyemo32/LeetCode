#include "../../bits/stdc++.h"


 struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 

class Solution {
public:
    unordered_map<ListNode*,int> freq; 
    bool hasCycle(ListNode *head) {
       
        if(head->next == NULL){
            return false; 
        }
    ListNode*start = head; 
        while(start!=NULL){
            if(freq.count(start)>0){
            return  true; 
            }
        freq[start]++;  
            start = start->next; 
        }

        return false; 
    }
};





int main(){











    return 0; 
}
