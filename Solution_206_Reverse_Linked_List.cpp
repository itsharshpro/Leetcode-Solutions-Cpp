#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode* prev = head;
        ListNode* temp = head->next;
        ListNode* after = head->next->next;
        while(temp->next!=NULL){
            temp->next = prev;
            prev = temp;
            temp = after;
            after = after->next;
        }
        temp->next = prev;
        head->next = NULL;
        return temp;
    }
};