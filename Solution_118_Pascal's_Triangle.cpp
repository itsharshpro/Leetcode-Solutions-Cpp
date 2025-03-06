#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
    public:
    vector<int> generateRow(int n){
        vector<int> v;
        int ans = 1;
        v.push_back(ans);
        for(int i = 1; i<n; i++){
            ans = ans*(n-i);
            ans /= i;
            v.push_back(ans);
        }
        return v;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i = 1; i<=numRows; i++){
            res.push_back(generateRow(i));
        }
        return res;
    }
};