#include <iostream>
#include <vector>
using namespace std;

void fun(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << '\n';
}

void fun(const vector<int> &v)    // using reference to avoid copying of vector
{
    for(auto x : v)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(a) / sizeof(int);
	fun(a, n);
    
    vector<int> v{1,2,3,4};
    fun(v);
    
    return 0;
}
