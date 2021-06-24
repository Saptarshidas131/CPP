#include<iostream>
#include<stack>
using namespace std;

void find_greater(int arr[], int n)
{
    stack<int> s;
    
    // first element
    s.push(arr[0]);
    cout << -1 << " ";
    
    for(int i = 0; i < n; i++)
    {
        while(s.empty() == false && s.top() <= arr[i])
            s.pop();
            
        int pg = (s.empty()) ? -1 : s.top();
        cout << pg << " ";
        s.push(arr[i]);
    }
    
}

int main()
{
    int a[] = {20,30,10,5,15};
    find_greater(a,sizeof(a)/sizeof(a[0]));
    
    return 0;
}
