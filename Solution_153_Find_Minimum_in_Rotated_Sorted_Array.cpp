#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int minimum = nums[0];
        while(low<=high){
            int mid = low + ((high-low)/2);
            minimum = min(minimum, nums[low]);
            if(nums[mid]>=nums[low]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return minimum;
    }
};