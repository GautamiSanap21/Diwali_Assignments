//Coding challange
//You are given an array of size n that contains distinct numbers from 0 to n. Your task is to find the one number that is missing from the array. 

#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return total - sum; 
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 8}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissingNumber(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
