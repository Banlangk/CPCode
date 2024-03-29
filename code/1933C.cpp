#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int a, b, l;
    std::cin >> a >> b >> l;
    
    std::set<int> s;
    while (true) {
        int x = l;
        while (true) {
            s.insert(x);
            if (x % b != 0) {
                break;
            }
            x /= b;
        }
        if (l % a != 0) {
            break;
        }
        l /= a;
    }
    
    std::cout << s.size() << "\n";
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
