#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

using i32 = int;
using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double ans = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1lf", ans * 1.0);
    return 0;
}