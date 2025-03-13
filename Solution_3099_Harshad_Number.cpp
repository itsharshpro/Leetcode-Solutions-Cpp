#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
    public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num = x;
        int sum = 0;
        while(num>0){
            int digit = num%10;
            sum += digit;
            num /= 10;
        }
        int ans = (x%sum==0) ? sum : -1;
        return ans;
    }
};