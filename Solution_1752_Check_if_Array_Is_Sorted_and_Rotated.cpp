#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return true;

    int x = 0;
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            x = i + 1;
            break;
        }
    }
    if (x == 0) return true;

    // x is calculated in terms of right rotation
    for (int i = 0; i < n - 1; i++) {
        int current = nums[(x + i) % n];
        int next = nums[(x + i + 1) % n];
        if (current > next) {
            return false;
        }
    }

    return true;
    }
};