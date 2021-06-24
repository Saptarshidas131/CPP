#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int> l {5,10,10,20,20,30,40};
 
 l.reverse();    // reverses the list
    
    cout << "\n";
    // print the list
    for(int x : l)
        cout << x << " ";
    
    l.sort();   // sort all the elements
    
    cout << "\n";
    // print the list
    for(int x : l)
        cout << x << " ";
        
    l.unique(); // removes consecutive duplicates in a list
    
        cout << "\n";
    // print the list
    for(int x : l)
        cout << x << " ";
        
        return 0;
    }
