#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    std::array<i64, 3> dp{};
    i64 ans = 0;
    for (int i = 0; i < n; i++) {
        dp[2]++;
        std::array<i64, 3> g{};
        if (s[i] == '0') {
            g[1] += dp[0];
            g[2] += dp[1];
            g[2] += dp[2];
        } else {
            g[1] += dp[0];
            g[2] += dp[1];
            g[0] += dp[2];
            ans += dp[2] * (n - i);
        }
        dp = g;
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
