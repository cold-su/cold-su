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
    int m, s, t;
    cin >> m >> t >> s;
    if (t == 0) {
        cout << 0 << endl;
        return 0;
    }
    int a = s / t;
    if (s % t != 0) { a++; }
    if (m - a < 0) { cout << 0 << endl; }
    else { cout << m - a << endl; }
    return 0;
}