#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l {10,2,5,20};    // create a doubly linked list with 10,2,5,20
    
    l.pop_front();  // removes element from the front of the list
    l.pop_back();   // removes element from the back of the list
    
    // print the list, points iterator at the first element and iterates till it is not end
    for(auto it = l.begin(); it != l.end(); it++)
        cout << *it << " "; 
    
    return 0;
}
