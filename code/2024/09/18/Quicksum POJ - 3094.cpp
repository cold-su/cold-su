#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define int long long int

void solve() {
    char s[1000];
    while (gets(s) && s[0] != '#') {
        int ans = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == ' ') continue;
            ans += (i + 1) * (s[i] - 'A' + 1);
        }
        printf("%lld\n", ans);
    }
}

signed main() {
    solve();
    return 0;
}