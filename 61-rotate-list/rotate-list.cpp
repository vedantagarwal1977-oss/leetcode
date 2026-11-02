class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || k==0){return head;}
        ListNode*temp=head;
        int cnt=1;
        while(temp->next!=nullptr){
            cnt++;
            temp=temp->next;
        }
        if(k%cnt==0){return head;}
        k=k%cnt;
        temp->next=head;
        ListNode* newlast=head;
        int d=cnt-k;
        for(int i=1;i<d;i++){
        newlast=newlast->next;
        }
        ListNode* newhead=newlast->next;
        newlast->next=nullptr;
        return newhead;
        
    }
};