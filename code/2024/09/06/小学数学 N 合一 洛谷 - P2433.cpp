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

    const double pi = 3.141593;
    if (n == 1) {
        std::cout << "I love Luogu!";
    }
    if (n == 2) {
        println("{} {}", 6, 4);
    }
    if (n == 3) {
        println("{}\n{}\n{}", 3, 12, 2);
    }
    if (n == 4) {
        cout<<setprecision(6)<<500.0/3;
    }
    if (n == 5) {
        std::cout << (220 + 260) / (20 + 12);
    }
    if (n == 6) {
        cout<<sqrt(6*6+9*9);
    }
    if (n == 7) {
        println("110\n90\n0");
    }
    if (n == 8) {
        cout<<10*pi<<"\n"<<pi*25<<"\n"<<4/3.0*pi*125;
    }
    if (n == 9) {
        std::cout << 22;
    }
    if (n == 10) {
        // 30 > 10 > 6
        // 8 < x < 10
        // -> x = 9
        std::cout << 9;
    }
    if (n == 11) {
        std::cout << setprecision(6) << 100.0 / 3;
    }
    if (n == 12) {
        println("13\nR");
    }
    if (n == 13) {
        double V1 = 4 * pi * 64 / 3.0, V2 = 4 * pi * 1000 / 3.0;
        cout << (int)pow(V1 + V2, 1 / 3.0);
    }
    if (n == 14) {
        std::cout << 50;
    }
}

int main() {
    solve();
    return 0;
}