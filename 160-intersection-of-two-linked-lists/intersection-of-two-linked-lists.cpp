
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode* temp1=head1;
        ListNode* temp2=head2;
        map<ListNode*,int>mp;
        while(temp1!=nullptr){
            mp[temp1]=1;
            temp1=temp1->next;
        }
        while(temp2!=nullptr){
            if(mp.find(temp2)!=mp.end()){
                return temp2;
            }
            temp2=temp2->next;
        }
        return nullptr;

        
    }
};