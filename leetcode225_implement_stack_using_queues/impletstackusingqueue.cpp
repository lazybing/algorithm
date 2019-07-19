class MyStack {
    private:
        queue<int> que;
    public:
        // push element x onto stack
        void push(int x) {
            que.push(x);
            for (int i = 0; i < que.size() - 1; i++) {
                que.push(que.front());
                que.pop();
            }
        }

        //remove the element on top of the stack and return that element
        int pop() {
            int ret = que.front();
            que.pop();
            return ret;
        }

        // get the top element
        int top() {
            return que.front();
        }

        // returns whether the stack is empty
        bool empty() {
            return que.empty();
        }
};
