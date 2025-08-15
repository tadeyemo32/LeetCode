#include "../../bits/stdc++.h"


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> frequencies;

        for (auto& num:nums){
            frequencies[num]+=1;
        }

        for(const auto& [x,y]:frequencies){
           if(y>1){
               return true;
           } 

        }
    return false; 

    }
};


int main(){





    return 0 ;
}
