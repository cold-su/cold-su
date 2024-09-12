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

    for (int j : nums) {
        if (j < 2) goto outer;
        for (int i = 2; i < j; i++) {
            if (j % i == 0) goto outer;
        }
        std::cout << j << " ";
        outer:;
    }
}

signed main() {
    solve();
    return 0;
}