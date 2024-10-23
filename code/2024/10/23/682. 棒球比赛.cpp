class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::stack<int> stack;

       	for (int i = 0; i < operations.size(); i++) {
       		auto s = operations[i];
       		if (s == "C" || s == "D" || s == "+") {
       			if (s == "C") {
       				stack.pop();
       			} else if (s == "D") {
       				stack.push(stack.top() * 2);
       			} else if (s == "+") {
       				int b = stack.top();
       				stack.pop();
       				int a = stack.top();
       				stack.push(b);
       				stack.push(a + b);
       			}
       		} else {
       			stack.push(std::stoi(s));
       		}
       	}

       	int sum = 0;
       	while (!stack.empty()) {
       		sum += stack.top();
       		stack.pop();
       	}

       	return sum;
    }
};