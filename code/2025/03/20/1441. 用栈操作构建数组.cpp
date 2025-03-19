class Solution {
public:
	vector<string> buildArray(vector<int>& a, int n) {
		std::vector<std::string> ans;
		for (int i = 1, j = 0; i <= a.back(); i++) {
			ans.push_back("Push");
			if (i == a[j]) {
				j++;
			} else {
				ans.push_back("Pop");
			}
		}
		return ans;
	}
};