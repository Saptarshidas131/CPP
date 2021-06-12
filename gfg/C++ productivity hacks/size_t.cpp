/* size_t: 
 * used in C and C++
 * cannot take -ve value
 * adaptable depending upon the system (32/64 bit)
 * can take the largest value of the object of the program
 * used to calculate the size of the obeject because it cannot take -ve value
 */
#include <iostream>
#include <typeinfo>
#include <math.h>

using namespace std;

int main()
{
    cout << typeid(int).name() << endl;
    cout << typeid(size_t).name() << endl;

    // cannot take -ve value so shows the 2's complement of -5
    size_t i = -5;
    cout << i << endl;
	// cout << pow(2,32);
	return 0;
}

