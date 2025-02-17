#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxAns = 0;
        int start = prices[0];
        for(int i = 1; i<prices.size(); i++){
            if(prices[i]<=start){
                start = prices[i];
                continue;
            }
            maxAns = max(maxAns, prices[i]-start);
        }
        return maxAns;
    }
};