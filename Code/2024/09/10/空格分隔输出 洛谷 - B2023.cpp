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
    char a;
    int b;
    float c;
    double d;
    std::cin >> a >> b >> c >> d;
    std::cout << (char)a << " " << (int)b << " ";
    printf("%.6lf %.6lf", c, d);
}

signed main() {
    solve();
    return 0;
}