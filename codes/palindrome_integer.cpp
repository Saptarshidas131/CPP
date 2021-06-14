#include <iostream>

using namespace std;

bool isPalindrome(int n)
{
	int rev = 0, temp = n;

	while(temp > 0)
	{
		rev = rev*10 + temp%10;
		temp /= 10;
	}

	cout << rev << endl;

	if (n == rev)
		return true;
	else
		return false;
}

int main()
{
	int n;

	cin >> n;

	cout << isPalindrome(n);

	return 0;
}
