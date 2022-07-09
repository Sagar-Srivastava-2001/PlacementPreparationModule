class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast = head;
        ListNode*slow = head;
        
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
}; 
