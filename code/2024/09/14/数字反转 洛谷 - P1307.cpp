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
    string s = to_string(n);
    if (n == 0) {
        std::cout << 0;
    } else if (n < 0) {
        std::cout << "-";
        pos:;
        bool flag = true;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (flag && s[i] != '0') {
                flag = !flag;
            }
            if (s[i] != '-' && !flag) {
                std::cout << s[i];
            }
        }
    } else {
        goto pos;
    }
}

signed main() {
    solve();
    return 0;
}