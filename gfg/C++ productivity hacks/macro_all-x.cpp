#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

#define all(x) x.begin(),x.end()

int main()
{
    vector<int> v{3,2,1,4,4,5,3};

    sort(all(v));

    for(int x : v)
        cout << x << " ";
    cout << "\n";

    cout << binary_search(all(v),2);
    cout << "\n";

    set<int> s(all(v));
    
    for(int x : s)
        cout << x << " ";
    cout << "\n";
    
    fill(all(v),1);
    for(int x : v)
        cout << x << " ";
    cout << "\n";

    return 0;
}
