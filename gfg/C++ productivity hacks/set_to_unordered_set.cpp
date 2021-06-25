#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
	set<int> s{1,2,3,4};
    unordered_set<int> us(s.begin(),s.end());
    
    for(auto x : us)
        cout << x << " ";

	return 0;
}
