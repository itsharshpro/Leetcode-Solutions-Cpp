#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int value = 0;
        for(int i = 0; i<operations.size(); i++){
            if(operations[i][1]=='+') value++;
            else value--;
        }
        return value;
    }
};