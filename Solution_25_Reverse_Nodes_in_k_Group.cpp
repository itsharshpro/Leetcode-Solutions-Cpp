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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL, *curr=head, *Next=head;
        while(curr!=NULL)
        {
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
        }  
        return prev;
    }
    ListNode* getKthNode(ListNode* temp, int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;
        while(temp!=NULL){
            ListNode* kThNode = getKthNode(temp, k);
            if(kThNode==NULL){
                if(prevLast) prevLast->next = temp;
                break;
            }
            ListNode* nextNode = kThNode->next;
            kThNode->next = NULL;
            reverseList(temp);
            if(temp==head) head = kThNode;
            else prevLast->next = kThNode;

            prevLast = temp;
            temp = nextNode;
        }
        return head;
    }
};