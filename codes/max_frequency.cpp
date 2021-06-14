#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[] = {1, 2, 3, 3, 2, 2, 2, 3, 4, 5, 3, 3}, n = sizeof(a)/sizeof(int) , b[10] = {0};

	// counting the frequencies of digits 0 - 9
	for (int i = 0; i < n; i++)
		b[a[i]]++;

	// find the element with maximum frequency
	int mf = distance(b, max_element(b, b+10));
	cout << mf << endl;

	return 0;
}