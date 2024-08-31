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
    int v, n;
    std::cin >> v >> n;
    vector<int> res(65535), dp(65535);
    for (int i = 1; i <= n; i++) {
        std::cin >> res[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = v; j >= res[i]; j--) {
            dp[j] = max(dp[j], dp[j - res[i]] + res[i]);
        }
    }
    // for (int prev : dp) {
    //     std::cout << prev << " ";
    // }
    println("{}", v - dp[v]);
}

int main() {
    solve();
    return 0;
}