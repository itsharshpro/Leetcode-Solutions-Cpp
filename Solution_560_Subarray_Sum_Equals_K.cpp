#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int preSum = 0, cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            preSum+=nums[i];
            int rem = preSum-k;
            cnt+=mpp[rem];
            mpp[preSum]++;
        }
        return cnt;
    }
};