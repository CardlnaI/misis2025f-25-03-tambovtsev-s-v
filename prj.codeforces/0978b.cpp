#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int count = 0;
    int result = 0;

    for (char c : s) {
        if (c == 'x') {
            count++;
            if (count >= 3) {
                result++;
            }
        }
        else {
            count = 0;
        }
    }

    cout << result << endl;
    return 0;
}
