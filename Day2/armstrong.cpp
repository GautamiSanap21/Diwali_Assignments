//Question 4
//Check if number is Armstrong or not

#include<iostream>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int num1 = num;
    int sum = 0;

    while (num != 0) {
        int rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }

    return sum == num1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << "The number is an Armstrong number" << endl;
    } else {
        cout << "The number is not an Armstrong number" << endl;
    }
}
