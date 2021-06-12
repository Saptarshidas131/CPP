#include <iostream>

using namespace std;

int nextPrime(int n)
{
	n++;

	while(true)
	{
		int i;

		for(int i = 2; i < n; i++)
		{
			if (n%i == 0)
				break;
		}

		if (i == n)return n;
		n++;
	}
}

int main()
{
	int n;

	cin >> n;

	cout << nextPrime(n);
	
	return 0;
}
