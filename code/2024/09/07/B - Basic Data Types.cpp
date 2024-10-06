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
    int a;
    long long b;
    char c;
    float d;
    double e;
    std::cin >> a >> b >> c >> d >> e;
    println("{}\n{}\n{}\n{}", a, b, c, d);
    printf("%.1lf", e);
}

int main() {
    solve();
    return 0;
}