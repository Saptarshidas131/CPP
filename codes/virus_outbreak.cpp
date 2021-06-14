#include <iostream>
#include <string>

using namespace std;

int main()
{
	string v;

	int n, v_len;

	cin >> v;
	v_len = v.length();

	cin >> n;

	while(n--)
	{
		string b;
		int b_len, j = 0, i;

		cin >> b;
		b_len = b.length();

		for (i = 0; i < v_len; i++)
		{
			if (b[j] == v[i])
				j++;
		}

		if (j == b_len)
			cout << "POSITIVE" << endl;
		
		else
			cout << "NEGATIVE" << endl;
	}


	return 0;
}