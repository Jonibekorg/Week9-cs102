#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int org = n;
    int result = 0;
    while (n > 0) {
        result = result * 10 + n % 10;
        n /= 10;
    }
    return org == result;
}

int main() {
    int n;
    if (cin >> n) {
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            if (isPalindrome(i)) sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}
