#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int n)
{
	string s = "", ns = to_string(n);

	s = ns;

	reverse(s.begin(),s.end());

	//cout << s  << " " << ns << endl;

	if (s == ns)
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
