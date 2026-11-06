
class Solution {
public:
    ListNode* reverse(ListNode* temp){
        ListNode*prev=nullptr;
        while(temp!=nullptr){
            ListNode*nextnode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nextnode;
        }
        return prev;
    }
    ListNode* findkthelement(ListNode*temp,int k){
        for(int i=1;i<k && temp!=nullptr;i++){
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*prevnode=nullptr;
        ListNode*nextnode=nullptr;
        ListNode*kthelement=nullptr;
        while(temp!=nullptr){
            kthelement=findkthelement(temp,k);
            if(kthelement==nullptr){
                prevnode->next=temp;
                break;
            }
            nextnode=kthelement->next;
            kthelement->next=nullptr;
            reverse(temp);
            ListNode*newhead=kthelement;
            if(head==temp){
                head=newhead;
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
