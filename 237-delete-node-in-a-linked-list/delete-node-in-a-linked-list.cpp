
class Solution {
public:
    void deleteNode(ListNode* ele) {
        ele->val = ele->next->val;
        ListNode* temp = ele->next;
        ele->next = ele->next->next;
        delete temp;
    }
};
