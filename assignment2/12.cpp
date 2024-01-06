#include <iostream>
using namespace std;

int main() {
    int rows;
    
    cout << "Enter the number of rows for the pattern: ";
    cin >> rows;

    int first = 0, second = 1, third;

    for (int i = 1; i <= rows; ++i) {
        for (int j = i; j < rows; ++j) {
            cout << " ";
        }
        
        cout << first << " ";
        
        if (i > 1) {
            cout << " ";
            for (int k = 1; k < i; ++k) {
                third = first + second;
                cout << third;
                if (k < i - 1) {
                    cout << " ";
                }
                first = second;
                second = third;
            }
        }
        cout << endl;
        first = 0;
        second = 1;
    }

    return 0;
}
