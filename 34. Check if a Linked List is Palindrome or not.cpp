class Solution {
public:
    
    ListNode* middle(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr){
            ListNode* forw = curr->next;;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* mid = middle(head);
        ListNode*b = reverse(mid);
        ListNode*a = head;
        
        bool ans = true;
        
        while(b){
            if(a->val != b->val){
                ans = false;
                break;
            }
            b = b->next;
            a = a->next;
        }
        
        reverse(mid);
        return ans;
    }
};
