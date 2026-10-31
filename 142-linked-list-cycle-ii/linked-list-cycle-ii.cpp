class Solution {
public:
    ListNode* function(ListNode*slow,ListNode*fast,ListNode* head){
        slow=head;
        while(fast!=slow){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;

    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){return function(slow,fast,head); }
        }
        return nullptr;
        
    }
};