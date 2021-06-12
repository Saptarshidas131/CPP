/* Give change
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents
    1 penny is 1 cent
*/
#include<iostream>

using namespace std;

int main()
{
    int amount ,dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    cout << "Enter the change amount(in cents): ";
    cin >> amount;

    dollars = amount / 100;
    amount %= 100;

    quarters = amount / 25;
    amount %= 25;

    dimes = amount / 10;
    amount %= 10;

    nickels = amount / 5;
    amount %= 5;

    pennies = amount;

    cout << "dollars  :" << dollars << endl;
    cout << "quarters :" << quarters << endl;
    cout << "dimes    :" << dimes << endl;
    cout << "nickels  :" << nickels << endl;
    cout << "pennies  :" << pennies << endl;

    return 0;
} 
