class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> s;
        ListNode* temp = headA;
        
        while(temp!=NULL){
            s.insert(temp);
            temp = temp->next;
        }
        
        temp = headB;
        
        while(temp != NULL){
            if(s.find(temp) != s.end()){
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }
};
