#include <iostream>

using namespace std;

int main()
{	
	int arr[] = {10, 20, 30};

	int *ptr = arr;

	cout << "size of arr: "<< sizeof(arr) << " size of ptr: " << sizeof(ptr);

	return 0;
}