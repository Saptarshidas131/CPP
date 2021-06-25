// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


// return the number of set bit in n
int countSetBit(int n){
    return  __builtin_popcount(n);
}

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int answer = countSetBit(n);
        cout<<answer<<"\n";
    }
}  // } Driver Code Ends
