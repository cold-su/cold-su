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
    int a, b;
    std::cin >> a >> b;
    std::cout << "floor " << a << " / " << b << " = " << floor((double)a / b) << "\n";
    std::cout << "ceil " << a << " / " << b << " = " << ceil((double)a / b)  << "\n";
    std::cout << "round " << a << " / " << b << " = " << round((double)a / b);
}

signed main() {
    solve();
    return 0;
}