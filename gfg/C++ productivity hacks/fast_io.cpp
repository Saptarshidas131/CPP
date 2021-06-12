// fast io for cp, decreasing io overhead for fast io operations
#include<bits/stdc++.h>

using namespace std;

void fastIO()
{
    // disabling sync with stdio, turnoff sync between C++ and C standard stream
    ios_base::sync_with_stdio(false);
    // untie input and output stream, to avoid sync between cin and cout
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int n;
    cin >> n;
    cout << n << "\n";
    return 0;
}
