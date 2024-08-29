#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n;
    std::cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::sort(nums.begin(), nums.end());
    
    int temp = nums[0] * nums[1];
    for (int i = 2; i < n; i++) {
        if (temp < nums[i - 1] * nums[i]) temp = nums[i - 1] * nums[i];
        else {
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES\n";
    for(int& prev : nums) {
        std::cout << prev << " ";
    }
    return 0;
}