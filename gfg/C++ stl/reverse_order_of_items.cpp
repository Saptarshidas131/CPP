#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reverse_order(string str)
{
        stack<char> s;
        
        int i = 0;
        while(str[i] != '\0')
        {
            s.push(str[i]);
            i++;
        }
        
        while(s.empty() == false)
        {
            cout << s.top();
            s.pop();
        }

}

int main()
{
    string s;
    cin >> s;
    reverse_order(s);
    
    return 0;
}
