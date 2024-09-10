#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())
#define int long long int

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int n, m;
    std::cin >> n >> m;
    vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }
    
    ranges::sort(nums);
    vector<int> target(m);
    for (int& i : target) {
        std::cin >> i;
    }

    for (int i = 0; i < m; i++) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target[i]) {
                right = mid - 1;
            } else left = mid + 1;
        }
        if (nums[left] != target[i]) {
            std::cout << "-1" << " ";
            continue;
        }
        std::cout << left + 1 << " ";
    }
}

signed main() {
    solve();
    return 0;
}