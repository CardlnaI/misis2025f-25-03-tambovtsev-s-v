#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k, r, c;
        std::cin >> n >> k >> r >> c;
        r--;
        c--;

        int D = (r + c) % k;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i + j) % k == D) {
                    std::cout << 'X';
                }
                else {
                    std::cout << '.';
                }
            }
            std::cout << '\n';
        }
    }

    return 0;
}
