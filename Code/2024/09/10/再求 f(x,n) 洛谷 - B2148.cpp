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

double solve(double x, int n) {
    if (n == 1) return x / (1 + x);
    else return x / (n + solve(x, n - 1));
}

signed main() {
    double x;
    int n;
    std::cin >> x >> n;
    printf("%.2lf", solve(x, n));
    return 0;
}