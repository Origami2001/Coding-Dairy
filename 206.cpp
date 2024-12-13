class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur=head,*pre=nullptr;
        while(cur!=nullptr){
            ListNode* tmp;
            tmp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=tmp;
        }
        return pre;
    }
};