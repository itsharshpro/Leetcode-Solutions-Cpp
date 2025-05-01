#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
    public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nge(1e4, -1);
        stack<int> st;
        st.push(-1);
        for(int i = nums2.size()-1; i>=0; i--){
            while(st.top()!=-1 && st.top()<nums2[i]) st.pop();
            nge[nums2[i]] = st.top();
            st.push(nums2[i]);
        }
        vector<int> res;
        for(int i  = 0; i<nums1.size(); i++){
            res.push_back(nge[nums1[i]]);
        }
        return res;
    }
};