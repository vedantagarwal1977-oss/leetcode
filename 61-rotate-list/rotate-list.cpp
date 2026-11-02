class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || k==0){return head;}
        ListNode*temp=head;
    
        int c=1;
        while(temp->next!=nullptr){
            c++;
            temp=temp->next;
        }
        if(k%c==0){return head;}
        k=k%c;
        temp->next=head;
        int d=c-k;
        ListNode*newlast=head;
        for(int i=1;i<d;i++){
        newlast=newlast->next;
        }
        ListNode*newhead=newlast->next;
        newlast->next=nullptr;
        return newhead;
    }
};