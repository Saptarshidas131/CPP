#include <iostream>
using namespace std;


const int N = 3;

void fun(int arr[][N], int M){
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cout<< arr[i][j] << " ";
        }
    }
}


int main() {
	
   int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   
   fun(arr, 3);
    
	
	return 0;
}
