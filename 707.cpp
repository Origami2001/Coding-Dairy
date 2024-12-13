class MyLinkedList {
public:
struct LinkedNode{
    int val;
    LinkedNode* next=nullptr;
    LinkedNode(int val):val(val),next(nullptr){}
};
    MyLinkedList() {
        dummy=new LinkedNode(0);
        size=0;
    }
    
    int get(int index) {
        if(index>(size-1)||index<0){
            return -1;
        }
        LinkedNode* cur=dummy->next;
        while(index--){
            cur=cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        LinkedNode* newNode=new LinkedNode(val);
        newNode->next=dummy->next;
        dummy->next=newNode;
        size++;
    }
    
    void addAtTail(int val) {
        LinkedNode* newNode=new LinkedNode(val);
        LinkedNode* cur=dummy;
        while(cur->next != nullptr){
            cur=cur->next;
        }
        cur->next=newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > size) return;
        if(index < 0) index = 0;        
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* cur = dummy;
        while(index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index >= size || index < 0) {
            return;
        }
        LinkedNode* cur = dummy;
        while(index--) {
            cur = cur ->next;
        }
        LinkedNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        tmp=nullptr;
        size--;
    }
private:
    int size;
    LinkedNode* dummy;

};