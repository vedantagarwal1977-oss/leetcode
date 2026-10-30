
class Solution {
public:
    ListNode*function(ListNode*temp1,ListNode*temp2,int d){
        while(d--){
            temp2=temp2->next;
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;

    }
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode*temp1=head1;
        int n1=0;
        int n2=0;
        ListNode*temp2=head2;
        while(temp1!=nullptr){
            n1++;
            temp1=temp1->next;
        }
        while(temp2!=nullptr){
            n2++;
            temp2=temp2->next;
        }
        temp1=head1;
        temp2=head2;
        if(n1>n2){
           return function(temp2,temp1,n1-n2);
        }
        else{
           return function(temp1,temp2,n2-n1);
        }
       return nullptr;
    }
};