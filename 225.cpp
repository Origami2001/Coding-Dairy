class MyStack {
public:
    queue<int> quein;
    queue<int> queout;
    MyStack() {
        
    }
    
    void push(int x) {
        quein.push(x);
    }
    
    int pop() {
        int quesize=quein.size();
        quesize--;
        while(quesize--){
            queout.push(quein.front());
            quein.pop();
        }
        int result=quein.front();
        quein.pop();
        quein=queout;
        while(!queout.empty()){
            queout.pop();
        }
        return result;
    }
    
    int top() {
        int quesize=quein.size();
        quesize--;
        while(quesize--){
            queout.push(quein.front());
            quein.pop();
        }
        int result=quein.front();
        queout.push(quein.front());
        quein.pop();
        quein=queout;
        while(!queout.empty()){
            queout.pop();
        }
        return result;
    }
    
    bool empty() {
        return quein.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */