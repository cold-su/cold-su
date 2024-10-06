#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int a, b;
    std::cin >> a >> b;
    printf("%.2lf\n", pow(a * a + b * b, 0.5));
}

int main() {
    solve();
    return 0;
}