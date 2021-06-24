#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> find_greater(int arr[], int n)
{
    stack<int> s;
    vector<int> v;
    
    // last element
    s.push(arr[n-1]);
    v.push_back(-1);
    
    for(int i = n-2; i >= 0; i--)
    {
        while(s.empty() == false && s.top() <= arr[i])
            s.pop();
            
        int ng = (s.empty()) ? -1 : s.top();
        v.push_back(ng);
        s.push(arr[i]);
    }
    
    reverse(v.begin(),v.end());
    return v;
    
}

int main()
{
    int a[] = {5,15,10,8,6,12,9,18};
    vector<int> v = find_greater(a,sizeof(a)/sizeof(a[0]));
    
    for(int x: v)
        cout << x << " ";
    
    return 0;
}
