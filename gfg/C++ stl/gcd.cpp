#include <iostream>

using namespace std;

int main()
{	
	int a, b, min, max, gcd = 1;

	cin >> a >> b;

	a > b ? max = a, min = b : max = b, min = a;

	for (int i = 1; i <= min; i++)
	{
		if (a%i == 0 and b%i == 0)
			gcd = i;
	}

	cout << gcd;;

	return 0;
}