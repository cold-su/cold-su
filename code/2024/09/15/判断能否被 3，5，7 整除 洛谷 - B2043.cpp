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
    int x;
    std::cin >> x;
    std::vector<int> nums{3, 5, 7}, ans;

    for (int i : nums) {
        if (x % i == 0) {
            ans.push_back(i);
        }
    }
    std::ranges::sort(ans);
    if (ans.empty()) {
        std::cout << "n";
    } else {
        for (int i : ans) {
            std::cout << i << " ";
        }
    }
}

signed main() {
    solve();
    return 0;
}