/*
    Write a program to read two numbers from the keyboard and display the large value on the screen.
*/

#include<iostream>

using namespace std;

int main()
{
    int number1, number2, large;

    cout << "Enter number1: " << "\n";
    cin >> number1 ;
    cout << "Enter number2: " << "\n";
    cin>> number2;

    large = (number1 > number2) ? number1 : number2;

    cout << "Large number is: " << large;

    return 0;
}
