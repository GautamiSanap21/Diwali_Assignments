//Question 1
//Addition of two numbers

#include<iostream>
using namespace std;

int sumOfNumbers(int num1,int num2){
    int sum = num1 +num2;
    return sum;
}
 int main(){
    int num1,num2;
    cout<<"Enter number:";
    cin>>num1;
    cout<<"Enter number:";
    cin>>num2;
    int sum = sumOfNumbers(num1,num2);
    cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
 }