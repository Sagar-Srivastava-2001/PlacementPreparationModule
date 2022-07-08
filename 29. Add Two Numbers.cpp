class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        
        ListNode* temp = NULL;
        ListNode* head = NULL;
        
        while(l1!=NULL or l2!=NULL)
        {
            int a,b;
            
            a = (l1==NULL ? 0 : l1->val);
            b = (l2==NULL ? 0 : l2->val);
            
            int sum = a+b+carry;
            
            if(sum >= 10){
                carry = 1;
                sum = sum%10;
            }
            else{
                carry = 0;
            }
            
            ListNode* x = new ListNode(sum);
            
            if(temp == NULL){
                head = temp = x;
            }
            else{
                temp->next = x;
                temp = x;
            }
            
            if(l1!=NULL){
                l1 = l1->next;
            }
            
            if(l2!=NULL){
                l2 = l2->next;
            }
        }
        
        if(carry==1){
            ListNode*x = new ListNode(carry);
            temp->next = x;
            temp = x;
        }
        
        return head;
    }
};
