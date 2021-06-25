// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

vector<int> sort(vector<int> vec){
    
    // declaring a set
    set<int> s;
    
    // complete the blank here
    // for(_____ itr : vec)
    for(auto itr : vec){
        s.insert(itr);
        // complete the loop
        
    }
    
    vector<int> answer;
    
    // complete the blank here
    // for(______ itr : s)
    
    for(auto itr : s){
        // complete the loop
        cout << itr << " ";
    }
    
    return answer;
}

// { Driver Code Starts.


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        
        cin>>n;
        vector<int> vec;
        
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        
        vector<int> answer = sort(vec);
        for(auto itr: answer)
        cout<<itr<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
