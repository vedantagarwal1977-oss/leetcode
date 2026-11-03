
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
      ListNode*dummy=new ListNode(-1);
      ListNode*temp=dummy;
      ListNode* t1=head1;
      ListNode* t2=head2;
      while(t1!=nullptr && t2!=nullptr){
        if(t1->val<t2->val){
            temp->next=t1;
            temp=t1;
            t1=t1->next;
        }
        else{
            temp->next=t2;
            temp=t2;
            t2=t2->next;
        }
      }
      if(t1!=nullptr){temp->next=t1;}
      if(t2!=nullptr){temp->next=t2;}
      return dummy->next;

    }
};