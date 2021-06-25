#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> s{"gfg","ide","practise"};
    vector<string> :: iterator it;
    
    cout << s.size() << "\n";
    
    for(auto it = s.begin(); it != s.end();)
        it = s.erase(it);   // erase element at the address pointed by iterator
    
    cout << s.size();
}
