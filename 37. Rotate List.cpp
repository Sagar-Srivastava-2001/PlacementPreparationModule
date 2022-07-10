class Solution {
public:
    
    int length(ListNode*head){
        int len = 0;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL || k == 0){
            return head;
        }
        
        int len = length(head);
        ListNode*curr = head;
        ListNode*prev = NULL;
        
        if(k % len == 0){
            return head;
        }
        
        if(k > len)
        k = k % len;
        
        for(int i=0;i<(len - k);i++){
            prev = curr;
            curr = curr->next;    
        }
        
        prev->next = NULL;
        prev = curr;
        
        while(curr->next != NULL){
            curr = curr->next;
        }
        
        curr->next = head;
        head = prev;
        return head;
    }
};
