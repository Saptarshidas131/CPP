#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d{10,20,30};
    
    d.push_back(5); // adds 5 to the back of the deque
    d.push_front(3); // adds 3 to the front of deque
    
    // print the deque
    for(int x : d)
        cout << x << " ";
        
    // print the front and the back elements of the deque
    cout << "\n" << d.front() << " " << d.back();

    return 0;
}
