#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int mid = (rows + 1) / 2;

    for (int i = 1; i <= rows; ++i) {
        if (i <= mid) {
            for (int j = i; j < mid; ++j)
                cout << "   ";
            for (int k = 1; k <= 2 * i - 1; ++k) {
                if (k % 2 == 0)
                    cout << "   ";
                else
                    cout << "*";
            }
        } else {
            for (int j = i; j > mid + 1; --j)
                cout << "   ";
            for (int k = 1; k <= 2 * (rows - i) + 1; ++k) {
                if (k % 2 == 0)
                    cout << "   ";
                else
                    cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
