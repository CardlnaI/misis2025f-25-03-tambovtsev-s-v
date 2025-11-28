#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i) std::cin >> p[i];

    std::vector<int> ans(n + 1);
    for (int i = 1; i <= n; ++i) {
        ans[p[i]] = i;
    }

    for (int i = 1; i <= n; ++i) {
        if (i > 1) std::cout << ' ';
        std::cout << ans[i];
    }
    std::cout << '\n';
    return 0;
}
