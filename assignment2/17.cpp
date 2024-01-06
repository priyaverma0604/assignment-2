#include <iostream>
using namespace std;

int main() {
    int size = 5; // Adjust the size of the pattern
    int mid = size / 2;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((j == mid && (i != mid)) || (i == mid))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
