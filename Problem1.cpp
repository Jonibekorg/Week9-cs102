#include <iostream>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;

    long long product = 1;
    int max_d = 0;

    if (n == 0) {
        product = 0;
        max_d = 0;
    }

    while (n > 0) {
        int d = n % 10;
        if (d != 0) product *= d;
        if (d > max_d) max_d = d;
        n /= 10;
    }

    cout << product << " " << max_d << endl;
    return 0;
}