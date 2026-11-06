class Solution {
public:
    ListNode* reverse(ListNode*temp){
        ListNode* prev=nullptr;
        while(temp!=nullptr){
            ListNode*nextnode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nextnode;
        }
        return prev;
    }
    ListNode*findthekth(ListNode*temp,int k){
        for(int i=1;i<k && temp!=nullptr;i++){
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*nextnode=nullptr;
        ListNode*prevnode=nullptr;
        ListNode*kthelement=nullptr;
        while(temp!=nullptr){
            kthelement=findthekth(temp,k);
            if(kthelement==nullptr){
                prevnode->next=temp;
                break;}
            nextnode=kthelement->next;
            kthelement->next=nullptr;
            kthelement=reverse(temp);
            if(head==temp){
                head=kthelement;
            }
            else{
                prevnode->next=kthelement;
            }
            prevnode=temp;
            temp=nextnode;
        }
        return head;
          
    }
};