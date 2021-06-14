#include <iostream>

using namespace std;

int reverse(int n)
{
	int rev = 0, f = 0, temp;

	if (n < 0)
	{
		f = 1;
		n *= -1;
	}

	temp = n;

	while(temp > 0)
	{
		rev = rev*10 + temp%10;
		temp /= 10;
	}

	if(rev >= INT_MIN && rev <= INT_MAX)
	{
		if (f)
			return (rev* -1);
		else
			return rev;
	}
	else
		return 0;
}

int main()
{
	int n;

	cin >> n;

	cout << reverse(n);

	return 0;
}