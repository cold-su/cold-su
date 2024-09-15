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
    int n = 3;
    vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }
    ranges::sort(nums);

    for (int i = 0; i < n; i++) {
        char c;
        std::cin >> c;

        if (c == 'A') {
            std::cout << nums[0];
        } else if (c == 'B') {
            std::cout << nums[1];
        } else {
            std::cout << nums[2];
        }
        std::cout << " ";
    }    
}

signed main() {
    solve();
    return 0;
}