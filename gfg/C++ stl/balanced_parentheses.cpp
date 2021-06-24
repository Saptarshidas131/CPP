#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool match(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

bool check_parentheses(string str)
{
    stack<int> s;
    
    for(unsigned int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);
        else
        {
            if(s.empty() == true)
                return false;
            else if(match(s.top(),str[i]) == false)
                return false;
            else
                s.pop();
        }
    }
    return (s.empty() == true);
}

int main()
{
    string s = "([])";
    cout << check_parentheses(s);
    
    return 0;
}
