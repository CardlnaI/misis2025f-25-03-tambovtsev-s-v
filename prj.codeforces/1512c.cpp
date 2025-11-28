#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int t;
    if (!(std::cin >> t)) return 0;
 
    while (t--) {
        int a, b;
        std::string s;
        std::cin >> a >> b >> s;
 
        std::string ans = s;
        int n = static_cast<int>(ans.size());
        bool ok = true;
 
        for (int i = 0; i < n / 2; ++i) {
            int j = n - 1 - i;
            if (ans[i] == '?' && ans[j] != '?') {
                ans[i] = ans[j];
            } else if (ans[j] == '?' && ans[i] != '?') {
                ans[j] = ans[i];
            } else if (ans[i] != '?' && ans[j] != '?' && ans[i] != ans[j]) {
                ok = false;
                break;
            }
        }
 
        if (!ok) {
            std::cout << -1 << '\n';
            continue;
        }
 
        int cur0 = 0, cur1 = 0;
        for (char ch : ans) {
            if (ch == '0') ++cur0;
            else if (ch == '1') ++cur1;
        }
 
        int rem0 = a - cur0;
        int rem1 = b - cur1;
        if (rem0 < 0 || rem1 < 0) {
            std::cout << -1 << '\n';
            continue;
        }
 
        for (int i = 0; i < n / 2; ++i) {
            int j = n - 1 - i;
            if (ans[i] == '?' && ans[j] == '?') {
                if (rem0 >= 2) {
                    ans[i] = ans[j] = '0';
                    rem0 -= 2;
                } else if (rem1 >= 2) {
                    ans[i] = ans[j] = '1';
                    rem1 -= 2;
                } else {
                    ok = false;
                    break;
                }
            }
        }
 
        if (!ok) {
            std::cout << -1 << '\n';
            continue;
        }
 
        if (n % 2 == 1) {
            int mid = n / 2;
            if (ans[mid] == '?') {
                if (rem0 > 0) {
                    ans[mid] = '0';
                    --rem0;
                } else if (rem1 > 0) {
                    ans[mid] = '1';
                    --rem1;
                } else {
                    ok = false;
                }
            }
        }
 
        if (!ok || rem0 != 0 || rem1 != 0) {
            std::cout << -1 << '\n';
            continue;
        }
 
        for (int i = 0; i < n; ++i) {
            if (ans[i] != '0' && ans[i] != '1') { ok = false; break; }
            if (ans[i] != ans[n - 1 - i]) { ok = false; break; }
        }
 
        if (!ok) std::cout << -1 << '\n';
        else std::cout << ans << '\n';
    }
 
    return 0;
}
