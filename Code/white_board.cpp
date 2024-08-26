#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    std::cin >> s;
    stack<char> sc;
    for (char& c : s) {
        if (c == '(') {
            sc.push(c);
        } else if (c == ')' && !sc.empty()) {
            sc.pop();
        } else if (c == ')' && sc.empty()) {
            goto outer;
        }
    }
    if (!sc.empty()) {
        outer:;
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
    }
    return 0;
}