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
    int findGCD(int a, int b){
        int aa = a;
        int bb = b;
        int gcd = 1;
        while(a>0 && b>0){
            if(a>b) a=a%b;
            else b=b%a;
        }
        if(a==0) gcd = b;
        else gcd = a;
        return gcd;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* prev = head;
        ListNode* front = head->next;
        while(front!=NULL){
            int gcd = findGCD(prev->val, front->val);
            ListNode* temp = new ListNode(gcd);
            temp->next = front;
            prev->next = temp;
            prev = front;
            front = front->next;
        }
        return head;
    }
};