class MyQueue {
private:
    stack<int> stk1;
    stack<int> stk2;
public:
    //push element x to the back of queue
    void push(int x) {
        while (!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
        }
        stk1.push(x);
        while (!stk2.empty()) {
            stk1.push(stk2.top());
            stk2.pop();
        }
    }

    // remove the element from in front fo queue 
    // and return the element
    int pop() {
        int ret = stk1.top();
        stk1.pop();
        return ret;
    }

    // get the front element
    int peek() {
        return stk1.top();
    }

    // return whether the queue is empty
    bool empty() {
        return stk1.empty();
    }
};
