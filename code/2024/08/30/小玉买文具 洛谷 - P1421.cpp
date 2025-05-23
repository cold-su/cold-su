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
    int a, b;
    std::cin >> a >> b;
    int t = a * 10 + b;
    int ans = 0;
    while (t >= 19) {
        t -= 19;
        ans++;
    }
    println("{}", ans);
    return 0;
}