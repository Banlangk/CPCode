#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int &x : a) {
        std::cin >> x;
    }

    int sum = std::accumulate(a.begin(), a.end(), 0);
    int cnt = 0;
    if (sum % 3 == 0) {
        std::cout << cnt << "\n";
    } else if (sum % 3 == 1) {
        bool flag = false;
        for (int x : a) {
            if (x % 3 == 1) {
                flag = true;
                std::cout << cnt + 1 << "\n";
                break;
            }
        }
        if (!flag) {
            std::cout << cnt + 2 << "\n";
        }
    } else {
        std::cout << cnt + 1 << "\n";
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
