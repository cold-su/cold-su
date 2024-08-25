class MinStack {
private:
    stack<int> normal;
    stack<int> min;
public:
    MinStack() {
        min.push(INT_MAX);
    }
    
    void push(int val) {
        normal.push(val);
        min.push(std::min(min.top(), val));
    }
    
    void pop() {
        normal.pop();
        min.pop();
    }
    
    int top() {
        return normal.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */