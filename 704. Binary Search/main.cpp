#include <iostream> 

using namespace std; 



class Solution {
public:
    int search(vector<int>& nums, int target) {

	int low = 0; 
	int high = nums.size(); 
	int mid =(low+high)/2;
	

	while (low<=high) {
	    if(nums[mid] == target){
		
		return mid;
	    }

	    if(nums[mid]< target){
		low = nums[mid];
	    }

	    if(){

	    }
	
	}
    }
};






int main(){



return 0; 


}
