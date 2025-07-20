#include <iostream>
#include <vector>
#include <map>
using namespace std;







class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> frequencyList; 
        
        for (int i = 0; i < nums.size(); i++) {
            frequencyList[nums[i]]++;
        }

        for (auto i : frequencyList) {
            if (i.second != 2) {
                return i.first;
            }
        }

        return 0; 
    }
};


int main() {
    
    return 0;
}
