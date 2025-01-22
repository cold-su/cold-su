class Solution {
  public:
	string toLowerCase(string s) {
		auto make = [] (char x) {
			if ('A' <= x and x <= 'Z') {
				return char(x + ' ');
			}
			return char(x);
		};
		for (char& x : s) {
			x = make(x);
		}
		return s;
	}
};