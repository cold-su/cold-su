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
    string s;
    std::cin >> s;
    int i = 0, j = s.size() - 1;
    bool is = true;
    while (i <= j) {
        if (s[i++] != s[j--]) {
            is = false;
        }
    }
    std::cout << (is ? "yes" : "no");
}

signed main() {
    solve();
    return 0;
}