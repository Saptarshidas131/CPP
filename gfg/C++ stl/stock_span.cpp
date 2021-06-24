#include<iostream>
#include<stack>
using namespace std;

void find_span(int arr[], int n)
{
    stack<int> s;
    for(int i = 0; i < n; i++)
    {
        while(s.empty() == false && arr[s.top()] <= arr[i])
            s.pop();
            
        int span = (s.empty()) ? (i+1) : (i - s.top());
        cout << span << " ";
        s.push(i);
    }
    
}

int main()
{
    int a[] = {15,13,12,14,16,8,6,4,10,30};
    find_span(a,sizeof(a)/sizeof(a[0]));
    
    return 0;
}
