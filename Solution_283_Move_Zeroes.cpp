#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        while(j<nums.size()){
            if(nums[i]!=0){
                i++;
                j++;
                continue;
            }
            if(nums[j]!=0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
            j++;
        }
    }
};