#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    
    l.push_back(10);    // adds 10 at the end of the list
    l.push_back(5);
    l.push_front(20);   // adds 20 at the front
    
    // print the list
    for(int x : l)
        cout << x << " ";
    
    return 0;
}
