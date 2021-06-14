#include <iostream>

using namespace std;

void find_pattern(string text, string pattern)
{
	int found = text.find(pattern);

	while(found != string::npos)
	{
		cout << "pattern found at: " << found << "\n";

		found = text.find(pattern,found+1);
	}
}

int main()
{	
	string s, patt;

	cin >> s >> patt;

	find_pattern(s,patt);

	return 0;
}