//11448834 	2015-06-05 17:32:21 	Hiasat98 	49A - Sleuth 	GNU C++ 	Accepted 	62 ms 	0 KB 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	char ch;
	for(int i = 0 ; i < s.length();i++){
		if(isalpha(s.at(i))){
			ch = s.at(i);
		}
	}
	string vowel = "AEIOUYaeiouy";
	if(vowel.find(ch) == string::npos){
		cout << "NO" << endl;
	}else cout << "YES" << endl;
	return 0;
}
