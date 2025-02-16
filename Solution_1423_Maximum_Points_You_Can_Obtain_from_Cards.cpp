#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxSum = 0;
        if(cardPoints.size()==k){
            for(int i = 0; i<cardPoints.size(); i++){
                maxSum+=cardPoints[i];
            }
            return maxSum;
        }
        int leftSum = 0;
        int rightSum = 0;
        for(int i = 0; i<k; i++){
            leftSum += cardPoints[i];
        }
        maxSum = leftSum;
        int rIndex = cardPoints.size()-1;
        for(int i = k-1; i>=0; i--){
            leftSum -= cardPoints[i];
            rightSum += cardPoints[rIndex];
            rIndex--;
            maxSum = max(maxSum, leftSum+rightSum);
        }
        return maxSum;
        
        
    }
};