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
    int a, b, c;
    std::cin >> a >> b >> c;
    std::vector nums{a, b, c};
    std::ranges::sort(nums);

    a = nums[0], b = nums[1], c = nums[2];
    if (a + b > c) {
        if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
            println("Right triangle");
        }
        if (pow(a, 2) + pow(b, 2) > pow(c, 2)) {
            println("Acute triangle");
        }
        if (pow(a, 2) + pow(b, 2) < pow(c, 2)) {
            println("Obtuse triangle");
        }
        if (a == b) {
            println("Isosceles triangle");
        }
        if (a == b && b == c) {
            println("Equilateral triangle");
        }
    } else println("Not triangle");
}

signed main() {
    solve();
    return 0;
}