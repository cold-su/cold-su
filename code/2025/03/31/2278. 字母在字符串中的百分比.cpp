class Solution {
public:
	int percentageLetter(string s, char letter) {
		return (std::count(s.begin(), s.end(), letter) / (double) s.size()) * 100;
	}
};