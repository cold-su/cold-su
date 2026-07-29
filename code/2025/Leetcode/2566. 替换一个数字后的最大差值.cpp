class Solution {
public:
    int minMaxDifference(int n) {
        auto s = to_string(n);
        auto p = s;
        for (auto c : s) {
            if (c != '9') {
                replace(s.begin(), s.end(), c, '9');
                break;
            }
        }
        for (auto c : p) {
            if (c != '0') {
                replace(p.begin(), p.end(), c, '0');
                break;
            }
        }
        return stoi(s) - stoi(p);
    }
};