// for each loop
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v {1,2,3,4};

    // for each
    for(auto i : v)
        cout << i << " ";
    cout << endl;
    
    // setting all elements to 1
    for(int i = 0; v[i]; i++)
        v[i] = 1;

    for(auto i : v)
        cout << i << " ";
	
	return 0;
}

