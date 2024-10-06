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
    int n;
    std::cin >> n;
    vector<int> nums(n + 2);
    for (int i = 1;  i <= n; i++) {
        std:cin >> nums[i];
    }

    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        int idx, pos;
        std::cin >> idx >> pos;
        
        nums[idx - 1] += pos - 1;
        nums[idx + 1] += nums[idx] - pos;
        nums[idx] = 0;      
    }

    for (int i =  1; i <= n; i++) {
        std::cout << nums[i] << "\n";
    }

}

signed main() {
    solve();
    return 0;
}