//Question 1
//sum of first n even numbers
#include<iostream>
using namespace std;

bool isEven(int num){
    if(num % 2 == 0){
        return true;
    }
    return false;
}

int sumUptoN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i;  
    }
    return sum;
}


int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    int result = sumUptoN(num);
    cout << "Sum of even numbers up to " << num << " is: " << result << endl;
}