#include<iostream>
#include<list>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;  // skip first 0
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        int sum = 0;

        while (temp != NULL) {
            if (temp->val == 0) {
                // create new node with sum
                tail->next = new ListNode(sum);
                tail = tail->next;
                sum = 0;
            } else {
                sum += temp->val;
            }
            temp = temp->next;
        }

        return dummy->next;
    }
};