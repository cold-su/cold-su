#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b;
    std::cin >> n >> b;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::sort(nums.rbegin(), nums.rend());
    int cnt = 0;
    for (int& i : nums) {
        if (b <= 0) break;
        cnt++;
        b -= i;
    }
    std::cout << cnt;
    return 0;
}