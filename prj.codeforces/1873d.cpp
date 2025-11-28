#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::string s;
        std::cin >> s;

        int ans = 0;
        int i = 0;

        while (i < n) {
            while (i < n && s[i] == 'W') i++;
            if (i >= n) break;

            int start = (i > n - k ? n - k : i);

            ans++;
            i = start + k;
        }

        std::cout << ans << "\n";
    }

    return 0;
}
