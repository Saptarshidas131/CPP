#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    map<int,int> mp;
    mp.insert({1,2});
    mp.insert({3,4});
    mp.insert({5,6});
    
    cout << "Ordered Map:\n";
    for(auto x : mp)
        cout << x.first << " " << x.second << "\n";
    
    unordered_map<int,int> um;
    
    // insert key,value pairs from ordered map to unordered map
    for(auto x : mp)
        um.insert({x.first,x.second});
        
    cout << "\nUnordered Map:\n";
    for(auto x : um)
        cout << x.first << " " << x.second << "\n";
        
    cout << "\nUnordered Map from ordered map:\n";
    unordered_map<int,int> um2(mp.begin(),mp.end());    // initialize with ordered map
    
    for(auto x : um)
        cout << x.first << " " << x.second << "\n";
    
    cout << "\nOrdered Map from unordered map:\n";
    map<int,int> mp2(um2.begin(),um2.end());    // initialize with unordered map
    
    for(auto x : mp2)
        cout << x.first << " " << x.second << "\n";
    
    return 0;
}
