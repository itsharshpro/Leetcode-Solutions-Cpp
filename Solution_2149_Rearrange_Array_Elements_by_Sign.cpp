#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int posi = 0;
        int nega = 1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]<0){
                ans[nega] = nums[i];
                nega+=2;
            }
            else{
                ans[posi] = nums[i];
                posi+=2;
            }
        }
        return ans;
    }
};