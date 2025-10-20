//Question 5
//Reverse the given number

#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        int digit = num % 10;           
        rev = rev * 10 + digit; 
        num = num / 10;               
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reverseNum = reverseNumber(num);
    cout << "Reversed number: " << reverseNum << endl;

    return 0;
}
