class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){return head;}
        vector<int> nums;
        ListNode*temp=head;
        while(temp!=nullptr && temp->next!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp!=nullptr){
            nums.push_back(temp->val);
        }
        ListNode*temp2=head->next;
        while(temp2!=nullptr && temp2->next!=nullptr){
            nums.push_back(temp2->val);
            temp2=temp2->next->next;
        }
        if(temp2!=nullptr){
            nums.push_back(temp2->val);}

        int i=0;
        ListNode*temp1=head;
        while(temp1!=nullptr){
            temp1->val=nums[i];
            temp1=temp1->next;
            i++;

        }
        return head;
        
    }
};