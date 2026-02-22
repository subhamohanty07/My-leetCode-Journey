#include<iostream>
using namespace std;

 struct ListNode {
     int val;
     struct ListNode *next;
 };


int countNodes(struct ListNode* head){
    int count = 0;
    struct ListNode* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int size = countNodes(head);
    int idx = size - n;

    if (idx == 0) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct ListNode* p = head;
    int i = 1;
    while(i < idx){
        i++;
        p = p->next;
    }

    struct ListNode* temp = p->next;
    p->next = p->next->next;
    free(temp);

    return head;
}