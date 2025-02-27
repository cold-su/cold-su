class TextEditor {
public:
	std::string p, r;
	TextEditor() {

	}

	void addText(string text) {
		p += text;
	}

	int deleteText(int k) {
		int cnt = 0;
		while (!p.empty() and k--) {
			p.pop_back();
			cnt++;
		}
		return cnt;
	}

	string cursorLeft(int k) {
		while (!p.empty() and k--) {
			r += p.back();
			p.pop_back();
		}
		return left();
	}

	string cursorRight(int k) {
		while (!r.empty() and k--) {
			p += r.back();
			r.pop_back();
		}
		return left();
	}

	std::string left() {
		return p.substr(std::max((int) p.size() - 10, 0));
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