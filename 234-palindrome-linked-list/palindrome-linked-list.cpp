class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode*temp=head;
        ListNode*prev=nullptr;
        while(temp!=nullptr){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(fast==nullptr){return true;}
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=reverse(slow->next);
        ListNode*start=head;
        ListNode*mid=newhead;
        while(mid!=nullptr){
        if(start->val!=mid->val){
            return false;
        }
        start=start->next;
        mid=mid->next;
        }
        return true;

       
        
    }
};