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
    int n;
    std::cin >> n;
    vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }
    for (int i = 0; i < nums.size(); i++) {
        int cnt = 0;
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i]) {
                cnt++;
            }
        }
        std::cout << cnt << " ";
    }
}

signed main() {
    solve();
    return 0;
}