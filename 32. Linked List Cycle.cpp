class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slow = head;
        ListNode*fast = head;
        
        while(slow and slow->next and slow->next->next and fast and fast->next and fast->next->next and fast->next->next->next){
            slow = slow->next->next;
            fast = fast->next->next->next;
        
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
