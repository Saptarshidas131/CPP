#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> s;
    int k, n;
    int arr[] = {10,30,40,50,20};
    n = 5;
    cin >> k;
    
    for(int i = 0; i < n; i++)
    {
        if (arr[i] < k)
            s.push_back(arr[i]);
    }
    
    for(int val : s)
        cout << val << " ";
}
