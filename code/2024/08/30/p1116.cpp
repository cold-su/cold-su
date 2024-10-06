#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        std::cin >> t[i];
    }
    int cnt = 0;
    while (!is_sorted(t.begin(), t.end())) {
        for (int i = 0; i + 1 < n; i++) {
            if (t[i] > t[i + 1]) {
                std::swap(t[i], t[i + 1]);
                cnt++;
            }
        }
    }
    std::cout << cnt;
    return 0;
}