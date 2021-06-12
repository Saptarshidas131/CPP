#include <iostream>

unsigned int count_digits(unsigned int n)
{
		
	unsigned int digits = 0;

	while (n > 0)
	{
	     ++digits; 
	     n /= 10;
	}

	return digits;
}


int main()
{
	int n ;

	std::cin >> n;

	std::cout << count_digits(n);

	return 0;
}