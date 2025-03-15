class min_stack {
	std::stack<std::pair<int, int>> st;
public:
	min_stack() {}

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

	int min() {
		return st.top().second;
	}
};
