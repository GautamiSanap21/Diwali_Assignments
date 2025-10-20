#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;

    n = abs(n);

    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = reverseNumber(num);
    cout << "Reversed number: " << result << endl;

    return 0;
}
