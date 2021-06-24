#include<iostream>
#include<list>
//#include<forward_list>
using namespace std;

int getSurv(int n, int k)
{
    list<int> l;
        
        for(int i = 0; i < n; i++)
        {
            l.push_back(i);
        }
        
        auto it = l.begin();
        while(l.size() > 1)
        {
            for(int count = 1; count < k; count++)
            {
                it++;
                if(it == l.end())
                    it = l.begin(); // if iterator reaches the end point iterator to the beginning, like circular linked list
            }
            it = l.erase(it);   // remove the element at the address pointed by the iterator
            if(it == l.end())
                it = l.begin(); // if iterator reaches the end point iterator to the beginning, like circular linked list
        }
        return *l.begin();
}

int main()
{
    int n, k;
    
    cin >> n >> k;
    
    cout << getSurv(n,k);
    
    return 0;
}
