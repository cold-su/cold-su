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
    
    vector<int> st, end;
    for (int i = 0; i < n; i++) {
        int s, e;
        std::cin >> s >> e;
        st.push_back(s);
        end.push_back(e);
    }

    ranges::sort(st);
    ranges::sort(end);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i && end[i - 1] > st[i]) {
            ans += end[i] - end[i - 1];
        } else {
            ans += end[i] - st[i];
        }
    }
    std::cout << ans;
}

signed main() {
    solve();
    return 0;
}