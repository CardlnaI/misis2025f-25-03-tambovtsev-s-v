#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, t;
    std::cin >> n;

    std::vector<int> posled(n);
    std::vector<int> answer;

    for (int i = n - 1; i >= 0; --i) {
        std::cin >> t;
        posled[i] = t;
    }

    for (int tmp : posled) {
        if (std::find(answer.begin(), answer.end(), tmp) == answer.end()) {
            answer.push_back(tmp);
        }
    }

    std::reverse(answer.begin(), answer.end());

    std::cout << answer.size() << "\n";
    for (int i = 0; i < answer.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << answer[i];
    }
    std::cout << "\n";

    return 0;
}
