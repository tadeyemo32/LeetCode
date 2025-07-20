#include <iostream> 


using namespace std; 

    


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr)
         return nullptr;

        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current != nullptr) {
            ListNode* next = current->next;
            current->next = prev;          
            prev = current;                 
            current = next;                
        }

        return prev;
    }
};



int main(){





return 0 ; 


}
