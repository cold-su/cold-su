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
    std:cin >> n >> m;
    vector<int> nums(n);
    for (int& i : nums) {
        std::cin >> i;
    }
    for (int i = 0; i < m; i++) {
        int k;
        std::cin >> k;
        std::cout << nums[--k] << "\n"; 
    }
}

signed main() {
    solve();
    return 0;
}