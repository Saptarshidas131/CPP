#include <iostream>

using namespace std;

int main()
{	
	string s, rev = "";

	cin >> s;

	int l = s.length() - 1;

	while(l >= 0)
	{
		rev += s[l];
		l--;
	}

	cout << rev;

	return 0;
}