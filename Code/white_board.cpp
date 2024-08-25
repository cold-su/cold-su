#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    std::cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    int t = v[0];
    for (int& prev : v) {
        if (prev < t && k > 0) {
            t = prev;
        }
        k--;
    }
    int cnt = 0;
    for (int& prev : v) {
        if (prev >= t && prev != 0) cnt++;
    }
    std::cout << cnt;
}