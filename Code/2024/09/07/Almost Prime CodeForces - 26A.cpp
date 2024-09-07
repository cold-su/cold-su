#include <bits/stdc++.h>
using namespace std;

#define println(...) puts(format(__VA_ARGS__).c_str())

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
} ();

bool is_prime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    std::cin >> n;

    vector<int> nums;
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) nums.push_back(i);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (i % nums[j] == 0) {
                cnt++;
            }
        }
        if (cnt == 2) {
            ans++;
        }
    }

    std::cout << ans;
}

int main() {
    solve();
    return 0;
}