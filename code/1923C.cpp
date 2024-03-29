#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n, q;
    std::cin >> n >> q;
    
    std::vector<int> c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }
    
    std::vector<i64> s1(n + 1), s2(n + 1);
    for (int i = 0; i < n; i++) {
        s1[i + 1] = s1[i] + c[i];
        s2[i + 1] = s2[i] + (c[i] == 1 ? 2 : 1);
    }
    
    while (q--) {
        int l, r;
        std::cin >> l >> r;
        l--;
        
        i64 a = s1[r] - s1[l];
        i64 b = s2[r] - s2[l];
        if (a >= b && r - l >= 2) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
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
