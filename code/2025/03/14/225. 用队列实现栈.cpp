class MyStack {
	std::deque<int> d;
public:
	MyStack() {}

	void push(int x) {
		d.push_back(x);
	}

	int pop() {
		int x = d.back();
		d.pop_back();
		return x;
	}

	int top() {
		return d.back();
	}

	bool empty() {
		return d.empty();
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