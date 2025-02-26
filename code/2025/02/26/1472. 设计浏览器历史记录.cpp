class BrowserHistory {
public:
	std::vector<std::string> p;
	int i = 0;
	BrowserHistory(string homepage) {
		p.push_back(homepage);
	}

	void visit(string url) {
		i++;
		p.resize(i);
		p.push_back(url);
	}

	string back(int steps) {
		i = fmax(0, i - steps);
		return p[i];
	}

	string forward(int steps) {
		i = fmin(p.size() - 1, i + steps);
		return p[i];
	}
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */