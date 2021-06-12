// check if a string is rotated then it matches another given string or not

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;

    cin >> s1 >> s2;

    if (s1.length() != s2.length())
    {
        cout << "No";
        return 0;
    }

    string temp = s1 + s1;

    // if npos is present then string is not matching
    if (temp.find(s2) != string::npos)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
