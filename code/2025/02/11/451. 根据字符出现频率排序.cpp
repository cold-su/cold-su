class Solution {
  public:
	string frequencySort(string s) {
		std::map<char, int> map;
		for (char c : s) {
			map[c]++;
		}
		std::sort(s.begin(), s.end(), [&](auto a, auto b) {
			int x = map[a];
			int y = map[b];
			return x == y ? a > b : x > y;
		});
		return s;
	}
};