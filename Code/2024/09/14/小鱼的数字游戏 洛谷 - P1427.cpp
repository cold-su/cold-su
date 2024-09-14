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
    vector<int> nums;
    while (std::cin >> n && n != 0) {
        nums.push_back(n);
    }
    for (int i = nums.size() - 1; i >= 0; i--) {
        std::cout << nums[i] << " ";
    }
}

signed main() {
    solve();
    return 0;
}