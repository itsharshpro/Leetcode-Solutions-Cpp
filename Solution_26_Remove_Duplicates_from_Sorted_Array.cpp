#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        int pointer = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]>nums[pointer]){
                swap(nums[pointer+1],nums[i]);
                pointer++;
            }
        }
        return pointer+1;
    }
};