#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
    public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n, 0);
        for(int i = 0; i<n; i++){
            ans[i] = ans[n+i]  = nums[i];
        }
        return ans;
    }
};