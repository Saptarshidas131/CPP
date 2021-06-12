#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0, sqsum = 0, ans;

	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
		sum += arr[i];

	for (int i = 0; i < n; i++)
		sqsum += arr[i] * arr[i];

	ans = ((sum * sum) - sqsum)/2;

	cout << ans;

	return 0;
}