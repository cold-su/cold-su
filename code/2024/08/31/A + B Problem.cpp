#include <bits/stdc++.h>

// #define println(...) puts(std::format(__VA_ARGS__).c_str())

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
    i64 a, b;
    std::cin >> a >> b;
    // println("{}", a + b);
    std::cout << a + b;
    return 0;
}