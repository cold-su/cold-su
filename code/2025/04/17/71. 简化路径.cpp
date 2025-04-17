class Solution {
public:
	string simplifyPath(string path) {
		int i = 0;
		auto next = [&]() {
			std::string res {};
			while (i < path.size() and path[i] != '/') {
				res += path[i];
				i++;
			}
			i++;
			return res;
		};
		std::vector<std::string> s;
		while (i < path.size()) {
			auto t = next();
			if (t != "") {
				if (t == ".") {

				} else if (t == "..") {
					if (s.size()) {
						s.pop_back();
					}
				} else {
					s.push_back(t);
				}
			}
		}
		std::string ans = "/";
		for (int i = 0; i < s.size(); i++) {
			ans += s[i];
			if (i < s.size() - 1) {
				ans += "/";
			}
		}
		return ans;
	}
};