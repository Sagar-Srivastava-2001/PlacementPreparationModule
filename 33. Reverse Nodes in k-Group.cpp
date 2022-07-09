class Solution {
public:
    
    ListNode*th = NULL;
    ListNode*tt = NULL;
    
    void addFirstNode(ListNode*head)
    {
        if(th==NULL){
            th = head;
            tt = head;
        }
        else{
            head->next = th;
            th = head;
        }
    }

    int length(ListNode*head)
    {
        int len = 0;
        ListNode*curr = head;
        while(curr){
            curr = curr->next;
            len++;
        }
        return len;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {

    if(head==NULL or head->next==NULL or k == 0){
        return head;
    }
    
    int len = length(head);
    ListNode*curr = head;
    
    ListNode*oh = NULL;
    ListNode*ot = NULL;

    
    while(len>=k){
        int tempK = k;
        while(tempK--){
            ListNode*forw = curr->next;
            curr->next = NULL;
            addFirstNode(curr);
            curr = forw;
        }
        if(oh==NULL){
            oh = th;
            ot = tt;
        }
        else{
            ot->next = th;
            ot = tt;
        }
        
        th = NULL;
        tt = NULL;
        len-=k;
    }
    
    ot->next = curr;
    return oh;

    }
};
