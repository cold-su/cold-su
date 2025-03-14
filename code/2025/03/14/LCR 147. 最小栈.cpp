class MinStack {
	std::stack<std::pair<int, int>> st;
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		int min = st.empty() ? x : std::min(x, st.top().second);
		st.push({x, min});
	}

	void pop() {
		st.pop();
	}

	int top() {
		return st.top().first;
	}

	int getMin() {
		return st.top().second;
	}
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */