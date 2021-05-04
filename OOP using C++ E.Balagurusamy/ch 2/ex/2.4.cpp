/*
    Write a program to read the values of a, b and c and display the value of x, where
        x = a/b - c
*/

#include<iostream>

using namespace std;

int main()
{
    int a, b, c, x;

    cout << "Enter values of a, b and c: " << "\n";
    cin >> a >> b >> c;

    x = a/b - c;

    cout << x;

    return 0;
}
