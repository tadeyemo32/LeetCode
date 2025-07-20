#include <iostream> 

using namespace std; 


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expectedSum = 0;
        int trueSum = 0;

        for (int i = 0; i <= n; i++) {
            expectedSum += i;
        }

        for (int i = 0; i < n; i++) {
            trueSum += nums[i];
        }

        return expectedSum - trueSum;
    }
};




int main() {

    

    return 0; 
}
