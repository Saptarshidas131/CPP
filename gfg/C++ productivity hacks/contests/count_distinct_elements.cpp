// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


// return the count of distinct numbers in 
// in arr
int countDistinct(int arr[], int n){
    // code here
    // user set or unordered_set
    unordered_set<int> s(arr,arr+n);
    
    return s.size();
}

// { Driver Code Starts.


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        
        cin>>n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        
        int answer = countDistinct(arr, n);
        cout<<answer<<"\n";
    }
    return 0;
}  // } Driver Code Ends
