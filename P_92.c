#include<stdio.h>

struct ListNode {
     int val;
     struct ListNode *next;
 };

struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    int i = 1;
    struct ListNode* curr = head;
    struct ListNode* prevLeft = NULL;

    while (i < left) {
        prevLeft = curr;
        curr = curr->next;
        i++;
    }

    struct ListNode* revPrev = NULL;
    struct ListNode* revCurr = curr;
    struct ListNode* next = NULL;

    for (i = 0; i <= right - left; i++) {
        next = revCurr->next;
        revCurr->next = revPrev;
        revPrev = revCurr;
        revCurr = next;
    }

    if (prevLeft != NULL)
        prevLeft->next = revPrev;
    else
        head = revPrev;

    curr->next = revCurr;

    return head;
}
