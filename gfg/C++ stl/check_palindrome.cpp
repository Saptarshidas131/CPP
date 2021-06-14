#include <iostream>

using namespace std;

int check_palindrome()
{	
	string s;

	cin >> s;

	int start = 0, end = s.length() - 1;

	while(start < end)
	{
		if (s[start] != s[end])
			return 0;
		start++;
		end--;
	}
		return 1;
}

int main()
{
	int res = check_palindrome();

	if (res == 1)
		cout << "Palindrome";
	else
		cout << "Not Palindrome";

	return 0;
}