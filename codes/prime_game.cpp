#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int isPrime(int n)
{
	if (n <= 1)
		return 0;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		int l, r;
		vector<int> p;

		cin >> l >> r;

		for (int i = l; i <=r; i++)
		{
			if(isPrime(i) == 1)
				p.push_back(i);
		}

		int psize = p.size();// max = *std::max_element(p.begin(),p.end()), min = *std::min_element(p.begin(),p.end());

		if (psize == 0)
			cout << -1;
		else if (psize == 1)
			cout << 0;
		else
			cout << p[psize-1] - p[0] << " ";
		cout << endl;

	}

	return 0;
}