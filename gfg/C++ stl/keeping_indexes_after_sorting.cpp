#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printSortedByMarks(int arr[], int n)
{
    vector<pair<int,int>> v;
    
    for(int i = 0; i < n; i++)
        v.push_back({arr[i],i});

    // sort elements
    sort(v.begin(),v.end());
    
    for(auto x : v)
    {
        cout << x.first << " " << x.second << "\n";
    }
    
}

int main()
{
    int arr[] = {97,56,35,55,87,3}, n = 5;
    printSortedByMarks(arr,n);
    return 0;
}
