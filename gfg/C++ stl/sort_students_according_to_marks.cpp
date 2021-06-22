#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// compare marks
int cmp(pair<int,int> p1, pair<int,int> p2)
{
    return p1.second > p2.second;
}

void printSortedByMarks(int roll[], int marks[], int n)
{
    vector<pair<int,int>> v;
    
    for(int i = 0; i < n; i++)
        v.push_back({roll[i],marks[i]});

    // sort by marks
    sort(v.begin(),v.end(),cmp);
    
    for(int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
}

int main()
{
    int marks[] = {55,56,76,87,97}, roll[] = {101,103,105,106,107}, n = 5;
    printSortedByMarks(roll,marks,n);
    return 0;
}
