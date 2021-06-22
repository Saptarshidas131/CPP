#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

void sortchar(int arr[], char arr2[], int n)
{
	// array of pairs
	pair<int,char> p[n];

	for(int i = 0; i < n; i++)
		p[i] = {arr[i],arr2[i]};	// making pair by taking element from arr and arr2

	// sort pair array according to the first element of the pair in the pair
	sort(p,p+n);

	// print the second element of every pair of the pair array
	for(int i = 0; i < n; i++)
		cout << p[i].second << " ";
}

int main()
{	int n;

	cin >> n;

	int arr[n];
	char arr2[n];

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	for(int i = 0; i < n; i++)
		cin >> arr2[i];

	sortchar(arr,arr2,n);

	return 0;
}