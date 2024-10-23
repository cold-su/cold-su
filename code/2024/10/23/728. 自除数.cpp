class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
    	std:vector<int> nums;
        for (int i = left; i <= right; i++) {
        	auto s = std::to_string(i);
        	bool is = true;
        	for (char j : s) {
        		if (j == '0' || i % (int)(j - '0') != 0) {
        			is = false;
        		}
        	}

        	if (is) {
        		nums.push_back(i);
        	}
        }
        return nums;
    }
};