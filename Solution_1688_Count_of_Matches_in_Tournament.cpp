#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
    public:
    int numberOfMatches(int n) {
        int totalMatches = 0;
        while(n>1){
            totalMatches += n/2;
            n = (n%2!=0) ? n/2+1 : n/2;
        }
        return totalMatches;
    }
};