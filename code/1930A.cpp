#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n * 2);
    for (int &x : a) {
        std::cin >> x;
    }
    std::sort(a.begin(), a.end());

    int ans = 0;
    for (int i = a.size() - 2; i >= 0; i -= 2) {
        ans += a[i];
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
