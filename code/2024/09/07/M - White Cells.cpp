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
    int h, w;
    int _h, _w;
    std::cin >> h >> w >> _h >> _w;
    std::cout << (h - _h) * (w - _w);
}

signed main() {
    solve();
    return 0;
}