#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool canMeasureWater(int x, int y, int target) {

    if (target > x + y) return false;
    if (target == 0) return true;
    return target % gcd(x, y) == 0;
}

int main() {
    int x, y, target;
    if (cin >> x >> y >> target) {
        if (canMeasureWater(x, y, target)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
}