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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* start = list1;
        for(int i = 0; i<b+1; i++){
            if(i==a-1) start = temp;
            temp = temp->next;
        }
        start->next = list2;
        while(list2->next!=NULL){
            list2 = list2->next;
        }
        list2->next = temp;
        return list1;
    }
};