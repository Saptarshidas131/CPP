#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d = {10,15,30,5,12};
    
    auto it = d.begin();
    it++;
    
    d.insert(it,20);    // insert 20 after it
    d.pop_front();  // removes the first element from the deque
    d.pop_back();   // removes the last element fromt the deque
    cout << d.size() << "\n";
    
    // print the deque
    for(int x : d)
        cout << x << " ";
        

    return 0;
}
