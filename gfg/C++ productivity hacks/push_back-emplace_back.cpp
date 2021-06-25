#include <iostream>
#include <vector>
using namespace std;



int main() {
	
    vector<string> words;
    
    words.push_back("push_back");
    words.push_back("emplace_back");
    
    for(auto x : words){
        cout<< x << "\n";
    }
	return 0;
}
