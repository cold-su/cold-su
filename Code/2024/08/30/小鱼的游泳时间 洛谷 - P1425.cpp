#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

const static auto initialize = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();

int main() {
    int ans_1, ans_2;
    int a, b;
    int c, d;
    std::cin >> a >> b >> c >> d;
    if (d < b) {
        c--;
        d += 60;
        ans_2 = d - b;
    } else {
        ans_2 = d - b;
    }
    ans_1 = c - a;
    println("{} {}", ans_1, ans_2);
    return 0;
}