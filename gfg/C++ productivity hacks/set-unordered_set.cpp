#include <iostream>
#include <unordered_set>
using namespace std;


int countDistinct( int arr[], int n){
    unordered_set<int> s( arr, arr + n);
    
    return s.size();
}

int main() {
	
    int arr[] = {1, 2, 3};
    cout<< countDistinct(arr, 3) << endl;
	return 0;
}
