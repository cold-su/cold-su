#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())
#define int long long

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int n, m;
    std::cin >> n >> m;

    vector<pair<int, int>> res(m);
    for (auto& prev : res) {
        std::cin >> prev.first >> prev.second;
    }

    std::sort(res.begin(), res.end());

    int idx = 0, ans = 0;
    for (auto p : res) {
        if (n >= p.second) {
            ans += p.first * p.second;
            n -= p.second;
        } else {
            ans += p.first * n;
            break;
        }
    }
    std::cout << ans;
}

signed main() {
    solve();
    return 0;
}