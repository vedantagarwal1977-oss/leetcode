class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        vector<int> nums;
        while(temp!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        temp=head;
        for(int i=0;i<n;i++){
            temp->val=nums[i];
            temp=temp->next;

        }
        return head;
    }
};