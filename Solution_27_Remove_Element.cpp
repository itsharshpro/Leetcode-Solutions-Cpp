#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = 0;
        while(right<nums.size()){
            if(nums[left]!=val && nums[right]!=val){
                left++;
                right++;
            }
            else if(nums[left]==val && nums[right]==val) right++;
            else{
                swap(nums[left], nums[right]);
                left++;
                right++;
            }
        }
        return left;
    }
};