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
    ListNode* addNode(ListNode*& mover, int& carry, int val) {
        val += carry;
        carry = val / 10;
        mover->next = new ListNode(val % 10);
        mover = mover->next;
        return mover;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        ListNode* mover = head;
        int carry = 0;

        while (l1 || l2) {
            int val1 = (l1) ? l1->val : 0;
            int val2 = (l2) ? l2->val : 0;
            mover = addNode(mover, carry, val1 + val2);
            
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        
        if (carry) {
            mover->next = new ListNode(carry);
        }

        return head->next;
    }
};