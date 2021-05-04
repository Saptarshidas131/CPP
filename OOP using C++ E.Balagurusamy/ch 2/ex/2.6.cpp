/*
    Redo Exercise 2.5 using a class called temp and member functions.
*/

#include<iostream>

using namespace std;

class temp
{
    float Celsius, Fahrenheit;

    public:
        void getFahrenheit(void);
        void display(void);
};

void temp :: getFahrenheit(void)
{
    cout << "Enter temperature in Fahrenheit: " << "\n";
    cin >> Fahrenheit;
}

void temp :: display(void)
{
    Celsius = Fahrenheit - 32/9;
    cout << "Temperature in Celsisu is " << Celsius << "C";
}

int main()
{
    temp t;
    t.getFahrenheit();
    t.display();

    return 0;
}
