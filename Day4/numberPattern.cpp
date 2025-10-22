// Question 3
// Print number pattern (triangle)

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= rows - i; space++)
        {
            cout << " ";
        }

        for (int num = 1; num <= i; num++)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
