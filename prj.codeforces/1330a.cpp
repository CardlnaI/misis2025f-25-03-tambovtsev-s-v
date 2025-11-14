#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int t = 0;
    std::cin >> t;
    for (int _ = 0; _ < t; _++) {
        int n, x, tmp;
        std::cin >> n >> x;
        std::vector<int> arr(1000, 0);
        for (int __ = 0; __ < n; __ += 1) {
            std::cin >> tmp;
            arr[tmp] = 1;
        }
        int v = 0;
        for (int i = 1; i < arr.size() && (arr[i] || x); i++) {
            if (0 == arr[i]) {
                arr[i] = 1;
                x -= 1;
            }
            v += 1;
        }
        std::cout << v << '\n';
    }
}
