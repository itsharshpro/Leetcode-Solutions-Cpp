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
    ListNode* mergeNodes(ListNode* head) {
        if(head->next->next==nullptr) return NULL;
        ListNode* mover = head;
        ListNode* temp = head->next;
        int sum = 0;
        while(temp!=NULL){
            if(temp->val==0){
                temp->val = sum;
                mover->next = temp;
                mover = temp;
                sum = 0;
            }
            else{
                sum+=temp->val;
            }
            temp = temp->next;
        }
        return head->next;
    }
};