#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for the pattern: ";
    cin >> rows;

    for (int i = 0; i < rows; ++i) {
        int val = 1;
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || i == 0) {
                val = 1;
            } else {
                val = val * (i - j + 1) / j;
            }
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
