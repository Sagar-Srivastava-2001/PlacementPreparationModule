class Solution {
public:
    void deleteNode(ListNode* node) {
        int temp = node->next->val;
        node->val = temp;
        ListNode*x = node->next->next;
        node->next = NULL;
        node->next = x;
    }
};

