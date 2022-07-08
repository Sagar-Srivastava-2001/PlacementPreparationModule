class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*c1 = l1;
        ListNode*c2 = l2;
        
        ListNode*dummy = new ListNode(-1);
        ListNode*itr = dummy;
        
        while(c1 and c2)
        {
            if(c1->val < c2->val){
                itr->next = c1;
                c1 = c1->next;
            }
            
            else{
                itr->next = c2;
                c2 = c2->next;
            }
            
            itr = itr->next;
        }
        
        itr->next = c1 != NULL ? c1 : c2;
        
        return dummy->next;
    }
};
