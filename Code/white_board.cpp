#include <bits/stdc++.h>

using namespace std;

void solve(int& prob) {
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        int n;
        std::cin >> n;
        if (n == 1) cnt++;
    }
    if (cnt >= 2) prob++;
}

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    int prob = 0;
    while (t--) solve(prob);
    std::cout << prob;
}