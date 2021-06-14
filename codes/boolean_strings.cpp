#include <iostream>
#include <string>

using namespace std;

int boolStrings(int n)
{
	if (n == 0)
		return 1;

	if (n < 0)
		return 0;

	return (boolStrings(n - 1) + boolStrings(n - 2));
}

int main()
{
	int n;

	cin >> n;

	cout << boolStrings(n);

	return 0;
}