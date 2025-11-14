#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        std::cout << (abs(a - b) / (c*2) + ((abs(a - b) / (c*2)) * (c*2) != abs(a-b))) << std::endl;
    }
}
