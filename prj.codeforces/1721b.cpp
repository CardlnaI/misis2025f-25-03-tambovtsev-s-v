#include <iostream>

int main()
{
    int t, n, m, x, y, d;
    std::cin >> t;
    for (int _ = 0; _ < t; _++) {
        std::cin >> n >> m >> x >> y >> d;
        bool flag = true;
        if (abs(1 - x) <= d and abs(n - x) <= d) { flag = false; }
        if (abs(1 - y) <= d and abs(m - y) <= d) { flag = false; }
        if (abs(n - x) <= d and abs(m - y) <= d) { flag = false; }
        if (abs(1 - x) <= d and abs(1 - y) <= d) { flag = false; }
        if (flag) {
            std::cout << n + m - 2 << std::endl;
        }
        else { std::cout << -1 << std::endl; }
    }
}

