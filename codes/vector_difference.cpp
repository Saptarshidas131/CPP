// increment the values of an zero array of size n from range l to r by 1 for q queries
// optimized method of p1stl.cpp

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int q, n;

	cin >> n >> q;

	// initialize a of size n with 0
	vector<int> a(n,0);


	while (q--)
	{
		int l, r;

		cin >> l >> r;

		// setting markers
		a[l]++;
		if (r+1 < n)
			a[r+1]--;
	}

	// cumulative sum
	for (int i = 1; i < n; i++)
		a[i] += a[i-1];

	for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}

	return 0;
}