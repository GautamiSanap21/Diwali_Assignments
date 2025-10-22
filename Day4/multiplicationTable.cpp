//Question 2
//Print multiplication table of a number

#include<iostream>
using namespace std;

void printTable(int num){

    for(int i=1;i<=10;i++){
            cout<<num<<" * "<<i<<" = "<<(num*i)<<endl;
        }
}

int main(){
    int num;
    cout<<"Enter number";
    cin>>num;

    cout<<"Table of "<<num<<endl; 
    printTable(num);
}