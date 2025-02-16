#include<vector>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;

        int maxLen = 0;
        int l = 0, r = 0;
        vector<int> hash(256, 0);
        while(r<s.size()){
            if(hash[s[r]]==0){
                hash[s[r]]++;
                maxLen = max(maxLen, r-l+1);
                r++;
            }else{
                hash[s[l]]--;
                l++;
            }
        }
        return maxLen;
    }
};