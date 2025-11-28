#include <iostream>
#include <vector>
#include <string>

int main() {
    int tests;
    std::cin >> tests;

    while (tests--) {
        int length, period;
        std::cin >> length >> period;
        std::string s;
        std::cin >> s;

        std::vector<char> base(period, '?');
        bool possible = true;

        for (int idx = 0; idx < length && possible; ++idx) {
            int r = idx % period;
            char cur = s[idx];
            if (cur == '?') continue;

            if (base[r] == '?') {
                base[r] = cur;
            }
            else if (base[r] != cur) {
                possible = false;
            }
        }

        int zeros = 0;
        int ones = 0;
        for (char ch : base) {
            if (ch == '0') ++zeros;
            else if (ch == '1') ++ones;
        }

        if (zeros > period / 2 || ones > period / 2) possible = false;

        std::string ans = possible ? "YES" : "NO";
        std::cout << ans << '\n';
    }

    return 0;
}
