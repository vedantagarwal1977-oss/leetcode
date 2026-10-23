class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr|| head->next==nullptr){
            return nullptr;
        }
    int cnt=0;
    ListNode* temp=head;
    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }
    if(cnt==n){
        ListNode* newhead= head;
        head=head->next;
        delete newhead;
        return head;

    }
    int res=cnt-n;
    ListNode* temp1=head;
    while(temp1!=nullptr){
        res--;
        if(res==0){break;}
        temp1=temp1->next;
    }
    ListNode*deletenode=temp1->next;
    temp1->next=temp1->next->next;
    delete deletenode;
    return head;
    }
};