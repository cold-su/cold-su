#include <bits/stdc++.h>

#define println(...) std::puts(std::format(__VA_ARGS__).c_str())
#define int long long int

const static auto INIT = [] {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
} ();

/* MY SOLUTION */

const bool HAVE_MULTIPLE_TESTCASES = false;

void solve() {
    int n;
    std::cin >> n;
    while (n--) {
        std::string a, b;
        std::cin >> a >> b;

        if (a == "Rock") {
            if (b == "Scissors") {
                std::cout << "Player1";
                goto end;

pos_1:
                std::cout << "Tie";
                goto end;
            }

            if (b == "Rock") {
                std::cout << "Tie";
                goto end;

pos_2:
                std::cout << "Player2";
                goto end;
            }

            if (b == "Paper") {
                std::cout << "Player2";
                goto end;

pos_3:
                std::cout << "Player1";
                goto end;
            }
        }

        if (a == "Scissors") {
            if (b == "Scissors") {
                goto pos_1;
            }

            if (b == "Rock") {
                goto pos_2;
            }

            if (b == "Paper") {
                goto pos_3;
            }
        }

        if (a == "Paper") {
            if (b == "Scissors") {
                goto pos_2;
            }

            if (b == "Rock") {
                goto pos_3;
            }

            if (b == "Paper") {
                goto pos_1;
            }
        }

end:
        std::cout << "\n";
    }
}

signed main() {
    if (HAVE_MULTIPLE_TESTCASES) {
        int t;
        std::cin >> t;
        while (t--) { solve(); }
    } else solve();
    return 0;
}