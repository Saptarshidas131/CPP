#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> v {1,2,3,3,5,6,5,9};
    unordered_set<int> us (v.begin(),v.end());
    
    for(auto x : us)
        cout << x << " ";
        
    return 0;
}
