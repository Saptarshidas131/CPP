// increment the values of an zero array of size n from range l to r by 1 for q queries
// bruteforce method

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int q, n;

	cin >> n >> q;

	int a[n];

	memset(a,0,sizeof(a));

	while (q--)
	{
		int l, r;

		cin >> l >> r;

		for (int i = l; i <= r; i++)
		{
			a[i] += 1;
		}
	}

	for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}

	return 0;
}