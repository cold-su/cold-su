#include <bits/stdc++.h>

#define println(...) puts(std::format(__VA_ARGS__).c_str())

using namespace std;

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

void solve() {
    int n;
    std::cin >> n;

    if (n >= 2) {
        println("Today, I ate {} apples.", n);
        return;
    }
    println("Today, I ate {} apple.", n);
}

int main() {
    solve();
    return 0;
}