#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode* temp = head;
        while(1){
            if(temp==NULL) return false;
            else if(temp->val==INT_MIN){
                return true;
            }
            temp->val = INT_MIN;
            temp = temp->next;
        }
        return false;
    }
};