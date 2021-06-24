#include<iostream>
using namespace std;

void printMaxK(int arr[], int n, int k)
{
    for(int i = 0; i < n - k + 1 ; i++)
    {
        int mx = arr[i];
        for(int j = i + 1; j < i + k; j++)
            mx = max(arr[j],mx);
        cout << mx << " ";
    }
}

int main()
{
    int arr[]{10,20,30,5,12,15,6}, n, k;
    cin >> n >> k;
    
    printMaxK(arr,n,k);
    
    return 0;
}
