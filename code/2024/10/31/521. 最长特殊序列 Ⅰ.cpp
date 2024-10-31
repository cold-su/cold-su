class Solution {
public:
    int findLUSlength(string a, string b) {/* 幽默 */
        if (a == b) {
        	return -1;
        }
        return std::max(a.size(), b.size());
    }
};