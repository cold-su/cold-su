class Solution {
  public:
	string winningPlayer(int x, int y) {
		if (std::min(x, y / 4) & 1) {
			return "Alice";
		}
		return "Bob";
	}
};