class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL or head->next==NULL){
            return NULL;
        }
        
        ListNode*dummy = new ListNode();
        dummy->next = head;
        ListNode*fast = dummy;
        ListNode*slow = dummy;
        
        for(int i=1;i<=n;i++){
            fast = fast->next;
        }
        
        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        return dummy->next;
    }
};
