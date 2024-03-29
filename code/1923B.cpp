#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;
    
    std::vector<std::pair<int, int>> m(n);
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        m[i].second = a;
    }
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        m[i].first = std::abs(x);
    }
    
    std::sort(m.begin(), m.end());
    i64 sum = 0;
    for (auto [x, a] : m) {
        sum += a;
        if (sum > 1LL * x * k) {
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << "YES\n";
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
