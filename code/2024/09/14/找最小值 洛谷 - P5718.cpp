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
    std::cout << *min_element(nums.begin(), nums.end());
}

signed main() {
    solve();
    return 0;
}