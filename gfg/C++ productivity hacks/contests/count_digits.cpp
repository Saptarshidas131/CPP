// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// return the number of digits in n
int countDigits(int n){
    
    int count = 0;
    
    while(n > 0)
    {
        n /= 10;
        count++;
    }
    
    return count;
}

// { Driver Code Starts.


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int answer = countDigits(n);
        cout<<answer<<"\n";
    }
    return 0;
}  // } Driver Code Ends
