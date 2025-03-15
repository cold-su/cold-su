class Spreadsheet {
	std::vector<std::array<int, 26>> p;
public:
	Spreadsheet(int r) {
		p.resize(r);
	}

	void setCell(string c, int v) {
		int i = c[0] - 'A';
		int j = std::stoi(c.substr(1)) - 1;
		if (j >= p.size()) {
			p.resize(j + 1);
		}
		p[j][i] = v;
	}

	void resetCell(string c, int v = 0) {
		setCell(c, 0);
	}

	int getValue(string c) {
		int i = c.find('+');
		auto l = c.substr(1, i - 1);
		auto r = c.substr(i + 1);
		auto type = [&](std::string s) {
			if ('A' <= s[0] and s[0] <= 'Z') {
				return "cell";
			} else {
				return "number";
			}
		};
		int x = 0, y = 0;
		if (type(l) == "cell") {
			int i = l[0] - 'A';
			int j = std::stoi(l.substr(1)) - 1;
			if (j >= p.size()) {
				p.resize(j + 1);
			}
			x = p[j][i];
		} else {
			x = std::stoi(l);
		}
		if (type(r) == "cell") {
			int i = r[0] - 'A';
			int j = std::stoi(r.substr(1)) - 1;
			if (j >= p.size()) {
				p.resize(j + 1);
			}
			y = p[j][i];
		} else {
			y = std::stoi(r);
		}
		return x + y;
	}
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */©leetcode