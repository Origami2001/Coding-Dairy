class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* cur=dummy;
        while(cur->next!=nullptr && cur->next->next!=nullptr){
            ListNode* tmp=cur->next;
            ListNode* tmp1=cur->next->next->next;
            cur->next=cur->next->next;
            cur->next->next=tmp;
            cur->next->next->next=tmp1;

            cur=cur->next->next;
        }
        return dummy->next;
    }
};