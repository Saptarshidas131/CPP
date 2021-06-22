#include <iostream>
//#include <utility>
using namespace std;

int main()
{	
	pair<int, int> p1(10,20);
	pair<int, string> p2(10,"test");
	pair<int, int> p3;

	p3 = make_pair(30,40);

	cout << p1.first << " " << p1.second << "\n";
	cout << p2.first << " " << p2.second << "\n";
	cout << p3.first << " " << p3.second;

	return 0;
}
