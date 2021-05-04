/*
    Write a C++ program that will ask for temperature in Fahrenheit and display it in Celsius.
*/

#include<iostream>

using namespace std;

int main()
{
    float Fahrenheit, Celsius;

    cout << "Enter temperature in Fahrenheit: " << "\n";
    cin >> Fahrenheit;

    Celsius = Fahrenheit - 32/9;

    cout << "Temperature in Celsius is " << Celsius << "C";

    return 0;
}
