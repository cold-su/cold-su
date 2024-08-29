#include <bits/stdc++.h>

using namespace std;

struct __res {
	string str;

	bool operator<(const __res b) const {
		return str + b.str > b.str + str;
	}
};

int main() {
    int n;
    std::cin >> n;
    vector<__res> nums(n);
    for (int i = 0; i < n; i++) {
    	std::cin >> nums[i].str;
    }
    std::sort(nums.begin(), nums.end());
    for(auto& prev : nums) {
    	std::cout << prev.str;
    }
}