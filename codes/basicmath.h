#include <math.h>


int count_digits(int n)
{
	int count = 0;

	while(n>0)
	{
		n /= 10;
		count++;
	}
	return count;
}

int count_digits2(int n)
{
	return floor(log(n)+1);
}