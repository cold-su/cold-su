class MyQueue {
	std::deque<int> d;
public:
	MyQueue() {

	}

	void push(int x) {
		d.push_back(x);
	}

	int pop() {
		int x = d.front();
		d.pop_front();
		return x;
	}

	int peek() {
		return d.front();
	}

	bool empty() {
		return d.empty();
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