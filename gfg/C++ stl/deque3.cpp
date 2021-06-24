#include<iostream>
#include<deque>
using namespace std;

deque<int> d;

void insertMin(int x)
{
        d.push_front(x);
}

void insertMax(int x)
{
    d.push_back(x);
}

int getMin()
{
   return d.front();
}

int getMax()
{
    return d.back();
}

int extractMin()
{
    return d.pop_front();
}

int extractMax()
{
    return d.pop_back();
}

int main()
{
    insertMin(10);
    insertMax(15);
    insertMin(5);
    cout << extractMin();
    cout << "\n" << extractMax();
    insertMin(8);
    
    // print the deque
    for(int x : d)
        cout << x << " ";

    return 0;
}
