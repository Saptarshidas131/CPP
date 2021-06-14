#include <iostream>

using namespace std;

int isPrime(int n)
{
    for (int i = 2; i < n/2; i++)
    {
        if (n%i == 0)
            return 0;
    }
    return 1;
}

void primefactors(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            int x = i;

            while(n%x == 0)
            {
                cout << i << " ";
                x *= i;
            }
        }
    }
}

int main()
{
    int n;

    cin >> n;

    primefactors(n);

    return 0;
}