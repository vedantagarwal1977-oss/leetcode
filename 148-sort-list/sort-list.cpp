class Solution {
public:
    ListNode* middlelist(ListNode* head){
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* mergelist(ListNode* left,ListNode* right){
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        ListNode* r=right;
        ListNode* l=left;
        while(r!=nullptr &&  l!=nullptr){
            if(r->val>l->val){
                temp->next=l;
                l=l->next;
            }
            else{
                temp->next=r;
                r=r->next;
            }
            temp=temp->next;
        }
        if(r!=nullptr){temp->next=r;}
        else{temp->next=l;}
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
     if(head==nullptr || head->next==nullptr){return head;}
     ListNode* middle=middlelist(head);
     ListNode* left= head;
     ListNode* right=middle->next;
     middle->next=nullptr;
     left=sortList(left);
     right=sortList(right);
     return mergelist(left,right);
    }
};