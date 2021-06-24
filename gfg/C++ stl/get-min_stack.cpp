#include<iostream>
#include<stack>
using namespace std;

stack<int> ms, as;

void push(int x)
{
    ms.push(x);
    if(as.top() >= ms.top())
        as.push(x);
}

void pop()
{
    if(as.top() == ms.top())
        as.pop();
}


int main()
{
    push(5);
    push(10);
    push(20);
    push(2);
    push(6);
    push(4);
    pop();
    pop();
    push(2);
    pop();
    push(1);
    pop();
    pop();
    
    return 0;
}
