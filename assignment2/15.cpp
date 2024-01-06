#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 3; // Number of rows in the pattern

    for (int i = 1; i <= n * 2 - 1; ++i) {
        int num = 1;
        int maxNum = (i <= n) ? i : n * 2 - i;

        for (int j = 1; j <= n * 2 - 1; ++j) {
            if (j >= n + 1 - maxNum && j <= n - 1 + maxNum) {
                cout << num;
                (j < n) ? ++num : --num;
            } else {
                cout << " ";
            }

            if (j != n * 2 - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
