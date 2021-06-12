#include <bits/stdc++.h>
using namespace std;


int main() {
	
   string baseString = "Geek I24 You Q87 Out";
   
   regex regexExpression("[A-Z][0-9][0-9]");
   
   smatch matched;
   
   while(regex_search(baseString, matched, regexExpression)){
       cout<< "Matched word is : " << matched.str() << endl;
       
       baseString = matched.suffix() ;
   }
   
    
	
	return 0;
}
