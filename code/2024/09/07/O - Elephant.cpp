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
    int cnt = 0;
    while (n > 5) {
        n -= 5;
        cnt++;
    }
    cnt++;
    std::cout << cnt;
}

signed main() {
    solve();
    return 0;
}