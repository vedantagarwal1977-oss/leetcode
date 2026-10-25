class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode*tem=head;
        while(tem!=nullptr){
            st.push(tem->val);
            tem=tem->next;
        }
        ListNode* temp=head;
        while(temp!=nullptr){
            if(temp->val!=st.top()){return false;}
            st.pop();
        temp=temp->next;
        }
        return true;
        
    }
};