#include <iostream>
using namespace std;

auto add = [](int x,int y){return x+y;};    // add lambda function
auto sub = [x = 5](int x, int y){return x-y;};  // single default argument
auto mul = [x = 2, y = 3](int x, int y){return x*y;};   //2 default arguments
auto divi = [&](int x, int y){return x/y;};  // passing by reference

int main()
{
    cout << add(2,3) << "\n";
    cout << sub(1,3) << "\n";
    cout << mul(1,4) << "\n";
    cout << divi(6,3) << "\n";
    
    return 0;
}
