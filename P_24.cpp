
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head ->next == nullptr)
            return head;
        ListNode* curr = head;
        ListNode* newH = head->next;

        while (curr != nullptr && curr->next != nullptr)
        {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            temp->next = curr;
            curr = curr->next;
            if(curr != nullptr && curr->next != nullptr)
                temp->next->next = curr->next;
        }

        return newH;
        
    }
         
        
    }
};