#include <iostream>
#include <vector>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int ans = 0;
        std::string row;

        for (int i = 0; i < 10; ++i) {
            std::cin >> row;
            for (int j = 0; j < 10; ++j) {
                if (row[j] == 'X') {
                    int dist = std::min(std::min(i, j), std::min(9 - i, 9 - j));
                    ans += dist + 1;
                }
            }
        }
        std::cout << ans << '\n';
    }
    return 0;
}
