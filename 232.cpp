class MyQueue {
public:
    stack<int> stin;
    stack<int> stout;
    MyQueue() {
        
    }
    
    void push(int x) {
        stin.push(x);
    }
    
    int pop() {
        if(stout.empty()){
            while(!stin.empty()){
                stout.push(stin.top());
                stin.pop();
            }
        }
        int result=stout.top();
        stout.pop();
        return result;
    }
    
    int peek() {
        if(stout.empty()){
            while(!stin.empty()){
                stout.push(stin.top());
                stin.pop();
            }
        }
        int result=stout.top();
        return result;
    }
    
    bool empty() {
        return stin.empty()&&stout.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */