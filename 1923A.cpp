#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int &x : a) {
        std::cin >> x;
    }

    int l = 0, r = n - 1;
    while (a[l] == 0) {
        l++;
    }

    while (a[r] == 0) {
        r--;
    }

    std::cout << std::count(a.begin() + l, a.begin() + r + 1, 0) << "\n";
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
