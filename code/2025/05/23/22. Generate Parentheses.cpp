class Solution {
public:
    vector<string> generateParenthesis(int n) {
        std::vector<std::string> ans;
        std::vector<char> p(2 * n, ')');
        auto check = [&](std::string s) -> bool {
            std::vector<char> v;
            for (char c : s) {
                if (c == ')') {
                    if (v.size() == 0 || v.back() == ')') {
                        return false;
                    }
                    v.pop_back();
                } else {
                    v.emplace_back(c);
                }
            }
            return v.size() == 0;
        };
        auto fn = [&](this auto& self, int i = 0, int cnt = 0) -> void {
            if (cnt == n) {
                auto s = std::string(p.begin(), p.end());
                if (check(s)) {
                    ans.emplace_back(s);
                }
                return;
            }
            for (int j = i; j < p.size(); j++) {
                p[j] = '(';
                self(j + 1, cnt + 1);
                p[j] = ')';
            }
        };
        fn();
        return ans;
    }
};