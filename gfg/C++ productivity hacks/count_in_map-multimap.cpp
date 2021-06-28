#include <iostream>
#include <map>
using namespace std;
int main()
{
	// count counts the number of keys in the map or multimap
	map<int, int> mp;
	for (int i = 2; i <= 10; i++)
	{
		mp.insert(make_pair(i, i + 1));
		mp.insert(make_pair(i, 2 *i));
	}
	cout << mp.count(2) << ' ' << mp.count(11) << '\n';

	multimap<int, int> mmp;
	for (int i = 2; i <= 10; i++)
	{
		mmp.insert(make_pair(i, i + 1));
		mmp.insert(make_pair(i, 2 *i));
	}
	cout << mmp.count(2) << ' ' << mmp.count(11) << '\n';

	return 0;
}
