class Solution {
public:
	bool
	threeConsecutiveOdds(std::vector<int>& arr)
	{
		int n = arr.size();
		bool ok = false;
		for (int i = 0; i + 2 < n; i++) {
			if (arr[i] & 1 and arr[i + 1] & 1 and arr[i + 2] & 1) {
				ok = true;
			}
		}
		return ok;
	}
};