/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){return nullptr;}
    ListNode*temp=head;
    int cmt=0;
    while(temp!=nullptr){
        cmt++;
        temp=temp->next;
    }
    int mid=cmt/2;
    ListNode* nya=head;
    while(nya!=nullptr){
        mid--;
        if(mid==0){
            ListNode* middle=nya->next;
            nya->next=nya->next->next;
            delete middle;
        }
        nya=nya->next;
    }
    return head;
    }
};