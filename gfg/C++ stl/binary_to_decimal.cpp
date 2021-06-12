#include <iostream>

using namespace std;

int main()
{
	int n, val = 0, base = 1;

	cin >> n;

	while(n > 0)
	{
		int last_digit = n%10;
		val += (last_digit*base);
		n /= 10;
		base *= 2;
	}

	cout << val;
	
	return 0;
}
