#include <iostream>

int main() {
    int y;
    std::cin >> y;
    y++;
    while (true) {
        int a = y % 10;
        int b = (y - a) % 100 / 10;
        int c = (y - a - b) % 1000 / 100;
        int d = (y - a - b - c) % 10000 / 1000;
        if (a != b and a != c and a != d and b != c and b != d and c != d) {
            std::cout << y;
            break;
        }
        else {
            y++;
        }
    }
}
