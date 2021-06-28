#include <iostream>
using namespace std ; 
# define  MAXN 10000000 
void fastIO(){
  ios_base::sync_with_stdio(false) ; 
  cin.tie(NULL) ; 
  cout.tie(NULL) ; 
}

int A[MAXN] ; 
int N ; 

int main(){
  fastIO() ;
  cin >> N ; 
  for(int i = 0 ; i < N ; i ++)  {
    cin >> A[i] ; 
  }  
  for(int i = 0 ; i < N ; i ++) { 
    cout << A[i] << " " ; 
  }
  return 0 ; 
}
