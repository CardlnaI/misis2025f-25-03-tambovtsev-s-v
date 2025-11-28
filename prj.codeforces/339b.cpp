#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n;
    int m;
    if (!(std::cin >> n >> m)) return 0;

    std::vector<long long> a(m);
    for (int i = 0; i < m; ++i) std::cin >> a[i];

    long long cur = 1;
    long long time = 0;

    for (int i = 0; i < m; ++i) {
        long long target = a[i];
        if (target >= cur) {
            time += target - cur;
        } else {
            time += (n - cur) + target;
        }
        cur = target;
    }

    std::cout << time << '\n';
    return 0;
}
