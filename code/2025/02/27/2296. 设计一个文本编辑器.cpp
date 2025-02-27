class TextEditor {
public:
	std::vector<char> p, r;
	TextEditor() {

	}

	void addText(string text) {
		for (char c : text) {
			p.push_back(c);
		}
	}

	int deleteText(int k) {
		int cnt = 0;
		while (!p.empty() and k) {
			p.pop_back();
			k--, cnt++;
		}
		return cnt;
	}

	string cursorLeft(int k) {
		while (!p.empty() and k) {
			r.push_back(p.back());
			p.pop_back();
			k--;
		}
		return get();
	}

	string cursorRight(int k) {
		while (!r.empty() and k) {
			p.push_back(r.back());
			r.pop_back();
			k--;
		}
		return get();
	}

	std::string get() {
		std::string ans {};
		int i = 0, n = p.size();
		i = std::max(i, n - 10);
		for (; i < p.size(); i++) {
			ans += p[i];
		}
		return ans;
	}
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */