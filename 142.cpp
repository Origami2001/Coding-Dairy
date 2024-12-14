class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                ListNode* index1=fast;
                ListNode* index2=head;
                while(index1!=index2){
                    index1=index1->next;
                    index2=index2->next;
                }
                return index2;
            }
        }
        return NULL;

    }
};