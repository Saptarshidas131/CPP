#include<iostream>
#include<deque>
using namespace std;

void printMaxK(int arr[], int n, int k)
{
    deque<int> d;
    
    for(int i = 0; i < k; i++)
    {
        while(!d.empty() && arr[i] >= arr[d.back()])
            d.pop_back();
        d.push_back(arr[i]);
    }
    
    for(int i = k; i < n; i++)
    {
        cout << arr[d.front()];
        while(!d.empty() && d.front() <= i-k)
            d.pop_front();
        while(!d.empty() && arr[i] >=  arr[d.back()])
            d.pop_back();
        d.push_back(arr[i]);
    }
    
    cout << arr[d.front()] << " ";
}

int main()
{
    int arr[]{10,20,30,5,12,15,6}, n, k;
    cin >> n >> k;
    
    printMaxK(arr,n,k);
    
    return 0;
}
