#include <iostream>
using namespace std;

int x = 20;

auto lambda1 = [=](){return 2*x;};
auto lambda2 = [var=x](){return 2*var;};


int main()
{
    x = 10;
    
    cout << lambda1() << "\n";
    cout << lambda2() << "\n";
    
    return 0;
}
