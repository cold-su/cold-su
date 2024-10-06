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
    string s1, s2;
    std::cin >> s1 >> s2;
    std::cout << s1[s1.size() - 1] - '0' + (int)s2[s2.size() - 1] - '0';
}

signed main() {
    solve();
    return 0;
}