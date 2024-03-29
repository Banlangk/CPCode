#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    
    int l = 1, r = n;
    for (int i = 0; i < n; i++) {
        int x;
        if (i % 2 == 0) {
            x = l++;
        } else {
            x = r--;
        }
        std::cout << x << " \n"[i == n - 1];
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
