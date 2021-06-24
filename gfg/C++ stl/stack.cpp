#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    
    // push 10 and 20 to the stack
    s.push(10);
    s.push(20);
    
    cout << s.top();    // print the top element of the stack
    s.push(30); // add 30 on top of stack
    cout << "\n" << s.size();   // print size of stack
    cout << "\n" << s.top();    // print the top element of stack
    cout << "\n" << s.empty();  // check if the stack is empty
    s.pop();s.pop();s.pop();
    cout << "\n" << s.empty(); // check if the stack is empty
    s.pop();    // underflow, stack empty
    
    return 0;
}
