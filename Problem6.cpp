#include <iostream>
using namespace std;

long long powerOfTwo(int e) {
    long long res = 1;
    for (int i = 0; i < e; ++i) {
        res *= 2;
    }
    return res;
}

void printLucky(int k) {
    int length = 1;
    long long count = 2;
    while (k > count) {
        k -= count;
        length++;
        count = powerOfTwo(length);
    }

    k -= 1;

    for (int i = length - 1; i >= 0; --i) {
        if ((k >> i) & 1) {
            cout << 7;
        } else {
            cout << 4;
        }
    }
    cout << endl;
}

int main() {
    int k;
    if (cin >> k) {
        printLucky(k);
    }
    return 0;
}
