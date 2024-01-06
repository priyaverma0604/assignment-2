#include <iostream>
using namespace std;

int main() {
    int n = 4 ;

    for (int i = 1; i <= n; ++i) {
        int num = 1;
        
        for (int j = 1; j <= n * 2 - 1; ++j) {
            if (j <= i || j >= n * 2 - i) {
                cout << num << " ";
                if (j < n) {
                    ++num;
                } else {
                    --num;
                }
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
