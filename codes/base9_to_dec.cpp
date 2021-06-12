#include <iostream>
#include <cmath>

using namespace std;

void dec_to_base9(int dec)
{
	int i, base9[10];

	for (i = 0; dec > 0; i++)
	{
		base9[i] = dec%9;
		dec /= 9;
	}

	for (i = i - 1; i >= 0; i--)
		cout << base9[i];

}

int main()
{
	int n;

	cin >> n;

	dec_to_base9(n);

	return 0;
}