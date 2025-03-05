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
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
    ListNode* findMiddle(ListNode* root){
        ListNode* slow = root;
        ListNode* fast = root->next; //here root->next is imp;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* sortTwoLists(ListNode* first, ListNode* second)
    {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        while(first!=NULL && second!=NULL){
            if(first->val<second->val){
                temp->next = first;
                temp = first;
                first = first->next;
            }
            else{
                temp->next = second;
                temp = second;
                second = second->next;
            }
        }
        if(first) temp->next = first;
        else temp->next = second;

        return dummyNode->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
            ListNode* middle = findMiddle(head);
            ListNode* right = middle->next;
            middle->next = nullptr;
            ListNode* left = head;

            left = sortList(left);
            right = sortList(right);
            return sortTwoLists(left, right);
    }
};