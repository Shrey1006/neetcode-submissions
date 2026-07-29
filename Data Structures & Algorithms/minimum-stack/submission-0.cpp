class MinStack {
    stack<int> stk;
public:
    MinStack() {
    }
    
    void push(int val) {
        stk.push(val);
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        stack<int> temp = stk;   // Copy the original stack
        int mn = temp.top();

        while (!temp.empty()) {
            mn = min(mn, temp.top());
            temp.pop();
        }
        return mn;
    }
};
