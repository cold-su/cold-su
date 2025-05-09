class Solution {
public:
	using i64 = long long;
	
	i64
	minSum(std::vector<int>& a, std::vector<int>& b) {
		if (std::min(cz(a), cz(b)) == 0) {
			if (sum(a) != sum(b) and cz(a) == cz(b)) {
				return -1;
			}
			if (cz(a) == 0) {
				std::swap(a, b);
			}
			if (sum(a) + cz(a) > sum(b)) {
				return -1;
			}
		}
		return std::max(sum(a) + cz(a), sum(b) + cz(b));
	}
private:
	int
	cz(std::vector<int>& v) {
		return std::count(v.begin(), v.end(), 0);
	}

	i64
	sum(std::vector<int>& v) {
		return std::accumulate(v.begin(), v.end(), 0LL);
	}
};