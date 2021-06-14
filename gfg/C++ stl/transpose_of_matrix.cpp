#include <iostream>
#include <vector>

using namespace std;

void output(vector<vector<int>> t, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << t[i][j] << " ";
		}
		cout << "\n";
	}
}

void transpose(vector<vector<int>> v, int n)
{
	vector<vector <int>> t(n, vector<int> (n,0));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			t[i][j] = v[j][i];
		}
		cout << "\n";
	}

	output(t, n);
}

void input()
{
	int n;

	cin >> n;

	vector<vector<int> > v(n, vector<int> (n,0));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int e;
			cin >> e;
			v[i][j] = e;
		}
	}

	output(v,n);
	transpose(v,n);
}

int main()
{	
	input();

	return 0;
}