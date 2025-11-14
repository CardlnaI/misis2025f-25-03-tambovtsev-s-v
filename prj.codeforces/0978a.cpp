#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::vector<int> result;
    std::vector<bool> seen(1001, false);
    for (int i = n - 1; i >= 0; i--) {
        if (!seen[arr[i]]) {
            seen[arr[i]] = true;
            result.push_back(arr[i]);
        }
    }
    std::reverse(result.begin(), result.end());
    std::cout << result.size() << std::endl;
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    return 0;
}
