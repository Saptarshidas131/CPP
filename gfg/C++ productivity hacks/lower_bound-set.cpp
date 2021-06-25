#include <iostream>
#include <set>
using namespace std;

int main()
{

	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);

	cout << *lower_bound(s.begin(), s.end(), 2) << '\n';
	// Bi-Directional Iterator, therefore 0(n) complexity

	cout << *s.lower_bound(2) << '\n';	// 0(logn)

	return 0;
}
