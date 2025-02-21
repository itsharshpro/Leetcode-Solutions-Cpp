#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        int minimum = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
            int sum = 0;
            int temp = nums[i];
            while(temp>0){
                int digit = temp%10;
                sum+=digit;
                temp/=10;
            }
            minimum = min(minimum, sum);
        }
        return minimum;
    }
};