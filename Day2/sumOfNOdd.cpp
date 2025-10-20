//Question 2
//sum of first n odd numbers
#include<iostream>
using namespace std;

bool isOdd(int num){
    if(num % 2 != 0){
        return true;
    }
    return false;
}

int sumUptoN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2*i)-1;  
    }
    return sum;
}


int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    int result = sumUptoN(num);
    cout << "Sum of odd numbers up to " << num << " is: " << result << endl;
}