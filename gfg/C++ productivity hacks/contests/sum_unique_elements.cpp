// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

long unique_elements(vector<long> v)
{
    unordered_map<int,int> um;
    
    for(int i = 0; i < v.size(); i++)
        um[v[i]]++;
    
    long sum = 0;
    for(auto x : um)
        {
            if(x.second == 1)
                sum += x.first;
        }
        
        return sum;
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
        
        vector<long>v(n,0LL);
        for(int i = 0; i < n;i++)
        {
            cin>>v[i];
        }
        cout<<unique_elements(v)<<endl;
    }
    return 0;
}  // } Driver Code Ends
