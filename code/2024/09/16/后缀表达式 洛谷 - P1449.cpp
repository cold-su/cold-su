#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto init = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}
();

void solve() {
    std::string raw;
    std::getline(std::cin, raw);
    std::vector<std::string> __vec;

    std::string temp;
    for (char i : raw) {
        if (i == '.') {
            push:;
            __vec.push_back(temp);
            temp = "";
        } else if (i == '@') {
            continue;
        } else if (i == '+' || i == '-' || i == '*' || i == '/') {
            temp += i;
            goto push;
        } else {
            temp += i;
        }
    }

    std::stack<int> __st;
    for (std::string i : __vec) {
        if (i == "+" || i == "-" || i == "*" || i == "/") {
            int b = __st.top();
            __st.pop();
            int a = __st.top();
            __st.pop();

            if (i == "+") {
                __st.push(a + b);
            }
            if (i == "-") {
                __st.push(a - b);
            }
            if (i == "*") {
                __st.push(a * b);
            }
            if (i == "/") {
                __st.push(a / b);
            }
        } else {
            __st.push(std::stoi(i));
        }
    }

    std::cout << __st.top();
}

signed main() {
    solve();
    return 0;
}