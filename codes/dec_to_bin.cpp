#include <iostream>

using namespace std;

void dec_to_bin(int dec)
{
	int i, bin[10];

	for (i = 0; dec > 0; i++)
	{
		bin[i] = dec%2;
		dec /= 2;
	}

	for (i = i - 1; i >= 0; i--)
		cout << bin[i];

}

int main()
{
	int n;

	cin >> n;

	dec_to_bin(n);

	return 0;
}