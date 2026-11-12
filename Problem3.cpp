#include <iostream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        for (int r = 1; r <= n; r++) {
            for (int c = r; c >= 1; c--) {
                cout << (char)('A' + c - 1);
            }
            cout << endl;
        }
    }
    return 0;
}