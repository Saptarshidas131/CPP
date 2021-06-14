#include <iostream>

int main()
{
	int a, b, c, max;
	
	std::cin >> a >> b >> c;
	
	//max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c) ;
	max = (a > b and a > c) ? a : (b > c) ? b : c;
	
	std::cout << max;
	
	return 0;
}
