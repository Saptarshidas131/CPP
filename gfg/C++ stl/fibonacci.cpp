#include <iostream>

using namespace std;

int main()
{
	int n, a = 1, b = 1, c = 0;

	cin >> n;
	cout << a << " " << b << " ";

	for (int i = 2; i < n; i++)
	{
		c = a+b;

		cout << c << " ";

		a = b;
		b = c;
	}
		
	return 0;
}