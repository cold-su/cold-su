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
    int m, n;
    std::cin >> m >> n;

    string s;
    for (int i = m; i <= n; i++) {
        s += std::to_string(i);
    }

    vector<int> ans(10);
    for (char i : s) {
        ans[i - '0']++;
    }

    for (int i : ans) {
        std::cout << i << " ";
    }
}

signed main() {
    solve();
    return 0;
}