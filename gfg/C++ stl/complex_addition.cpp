#include <iostream>
using namespace std;

struct complex
{
	int real, img;
};

int main()
{	
	complex n1, n2, n3;

	cin >> n1.real >> n1.img >> n2.real >> n2.img;

	n3.real = n1.real + n2.real;
	n3.img = n1.img + n2.img;

	cout << n3.real << " + " << n3.img << "i"; 

	return 0;
}