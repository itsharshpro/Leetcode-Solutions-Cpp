#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer(nums.size());
        int rightSum = 0, leftSum = 0;
        for(int i = nums.size()-1; i>=0; i--) rightSum+=nums[i];
        for(int i = 0; i<nums.size(); i++){
            rightSum -= nums[i];
            answer[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }
        return answer;
    }
};