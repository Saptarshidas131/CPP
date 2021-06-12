// make tuple, for multiple assignments and making tuple
#include <iostream>
#include<tuple>
using namespace std;

int main()
{
    int w, x, y, z;

    // making a 4 tuple
    tie(w,x,y,z) = make_tuple(10,20,30,40);
    cout << w << " " << x << " " << y << " "<< z << endl;

    // swap values
    tie(w,x) = make_tuple(x,w);
    cout << w << " " << x;
	
	return 0;
}

