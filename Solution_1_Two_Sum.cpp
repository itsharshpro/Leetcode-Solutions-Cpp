#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            if(mpp.find(target-nums[i])!=mpp.end()){
                res.push_back(mpp[target-nums[i]]);
                res.push_back(i);
                break;
            }
            mpp[nums[i]] = i;
        }
        return res;
    }
};