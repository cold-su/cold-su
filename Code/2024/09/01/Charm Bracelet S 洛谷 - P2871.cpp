#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

void solve() {
    int n, m;
    std::cin >> n >> m;
    vector<int> w(65535), v(65535), dp(65535);
    for (int i = 1; i <= n; i++) {
        std::cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    println("{}", dp[m]);
}

int main() {
    solve();
    return 0;
}