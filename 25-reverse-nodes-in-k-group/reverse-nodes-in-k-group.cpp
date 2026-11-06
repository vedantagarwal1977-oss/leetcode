
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if(head == nullptr || k == 1) return head;

        ListNode* temp = head;
        ListNode* prevNode = nullptr;

        while(temp != nullptr) {

            // Find kth node
            ListNode* kthNode = temp;

            for(int i = 1; i < k && kthNode != nullptr; i++) {
                kthNode = kthNode->next;
            }

            // If less than k nodes remain
            if(kthNode == nullptr) {
                if(prevNode != nullptr) {
                    prevNode->next = temp;
                }
                break;
            }

            // Save next group
            ListNode* nextNode = kthNode->next;

            // Reverse current group
            ListNode* prev = nextNode;
            ListNode* curr = temp;

            while(curr != nextNode) {
                ListNode* front = curr->next;
                curr->next = prev;
                prev = curr;
                curr = front;
            }

            // Connect previous group
            if(prevNode == nullptr) {
                head = kthNode;
            }
            else {
                prevNode->next = kthNode;
            }

            // Old head becomes tail
            prevNode = temp;

            // Move to next group
            temp = nextNode;
        }

        return head;
    }
};
