#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        int k;
        std::cin >> k;
        std::vector<bool> special(26, false);
        for (int i = 0; i < k; ++i) {
            char ch;
            std::cin >> ch;
            special[ch - 'a'] = true;
        }

        int idx = -1;
        for (int i = 0; i < n; ++i) {
            if (special[s[i] - 'a']) idx = i;
        }
        if (idx == -1) {
            std::cout << 0 << '\n';
            continue;
        }

        int ans = 0;
        for (int i = idx - 1; i >= 0; --i) {
            int j = i;
            while (j > 0 && !special[s[j] - 'a']) --j;
            ans = std::max(ans, i + 1 - j);
            i = j;
        }

        std::cout << ans << '\n';
    }
    return 0;
}
