#include <iostream>

using namespace std;

int greatestOfThree(int A, int B, int C) {
        // code here
        int r;
        return (r = (A > B ? (A > C ? A : C) : B ) );
    }
    
int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	cout << greatestOfThree(a,b,c);

	return 0;
}
