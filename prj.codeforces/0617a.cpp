#include <iostream>

int main() {
    int a, ans = 0;
    std::cin >> a;
    for (int i = 5; i >= 1; i--) {
        if (a > 0) {
            ans += a / i;
            a -= (a / i) * i;
        }
    }
    std::cout << ans;
}
