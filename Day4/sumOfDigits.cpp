//Question 4
//Sum of digits of a number

#include <iostream>
using namespace std;

// Function to calculate sum of digits (no abs)
int sumOfDigits(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    int result = sumOfDigits(number);
    cout << "Sum of digits: " << result << endl;

    return 0;
}


