#include <iostream>

using namespace std;

int main()
{

	int x;

	cin >> x;

	int zero_even_fib = 0, first_even_fib = 2;

	cout << zero_even_fib << " " << first_even_fib;

	int a = 0, b = 2, c = 2;

	while (c <= x)
	{
		c = 4*b + a;
		a = b;
		b = c;

		if (c > x)
			break;
		
		cout << c << " ";
	}

	return 0;
}