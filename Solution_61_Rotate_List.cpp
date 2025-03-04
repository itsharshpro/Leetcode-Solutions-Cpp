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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int size = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            size++;
            temp = temp->next;
        }
        k = k%size;
        if(k == 0) return head;
        k = size-k-1;
        temp = head;
        for(int i = 0; i<k; i++){
            temp = temp->next;
        }
        ListNode* preHead = head;
        head = temp->next;
        temp->next = NULL;
        temp = head;
        while(temp->next!=NULL) temp  = temp->next;
        temp->next = preHead;
        return head;
    }
};