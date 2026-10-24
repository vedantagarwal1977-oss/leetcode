
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    ListNode* newhead=reverseList(head->next);
    ListNode*front=head->next;
    front->next=head;
    head->next=nullptr;
    return newhead;
    }
};
