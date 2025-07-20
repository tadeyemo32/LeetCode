#include <iostream>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0]; 
	int profit = 0;
	for(int i =0;i<prices.size();i++){
	    auto current = prices[i]; 
		if (current < min){
		    min = current;
		}
	    auto newProfit = current -min; 
	    if(newProfit > profit){
		profit = newProfit;
	    }
	}
	return profit;
    }
};


int main(){

return 0 ; 
}
