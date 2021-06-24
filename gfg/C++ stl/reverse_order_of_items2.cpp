#include<iostream>
#include<stack>
#include<string>
using namespace std;

template <typename T>

void reverse_order(T data[], int n)
{
        stack<T> s;
        
        
        for(int i = 0; i < n;i++)
        {
            s.push(data[i]);
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
    int arr[] = {1,2,3,4};
    reverse_order(arr,4);
    
    return 0;
}
