// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void freqSorted(int arr[], int n)
{
 map<int,int> mp;
 for(int i = 0; i < n; i++)
 {
     mp[arr[i]]++;
 }
 for(auto x : mp)
    cout << "(" << x.first << "," << x.second << ") ";

}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        freqSorted(arr,n);
        
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
