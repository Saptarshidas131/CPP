#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    
    // push 10,20 and 30 to the stack
    s.push(10);
    s.push(20);
    s.push(30);
    
    // as long stack is not empty print the top element of the stack and pop it
    while(s.empty() == false)
    {
        cout << s.top() << "\n";
        s.pop();
    }

    
    return 0;
}
