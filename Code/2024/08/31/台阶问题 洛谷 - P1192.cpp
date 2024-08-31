#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

using i32 = int;
using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

const int mod = 1e5 + 3;
const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();


int main() {
    int n, k;
    std::cin >> n >> k;
    vector<int> dp(100000);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i >= j){
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }
    std::cout << dp[n] % mod;
    return 0;
}