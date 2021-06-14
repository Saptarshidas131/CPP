#include <iostream>

int main()
{
	int n, sum = 0;
	
	std::cin >> n;
	
	/* // O(n) time complexity
	while(n > 0)
	{
		sum += n;
		n--;
	}
	*/
	//O(1) time complexity
	sum = n*(n+1)/2;
	
	std::cout << sum;
	
	return 0;
}
