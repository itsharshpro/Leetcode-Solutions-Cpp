#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
    public:
    bool isSameAfterReversals(int num) {
        return (num!=0 && num%10==0) ? false : true;
    }
};