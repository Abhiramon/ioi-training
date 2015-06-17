//10976559	2015-05-02 19:43:09	Hiasat98	538A - Cutting Banner	GNU C++	Accepted	30 ms	2000 KB
#include <iostream>

using namespace std;

string toString(char c){
	string a = "";
	a += c;
	return a;
}

int main() {
	string banner;
	cin >> banner;
	
    string const_banner = "CODEFORCES";
    if(banner.length() < 10){
    	cout << "NO" << endl;
    }else{
	int r = 0;
	int l = 0;
	for(int i = 0 ; i < const_banner.length();i++){
		if(const_banner.at(i) == banner.at(i)){
			l++;
		}else{
			break;
		}
	}
	int last_index = const_banner.length() -1;
	for(int i = 0 ; i < const_banner.length();i++){
	   if(const_banner.at(last_index - i) == banner.at(banner.length() - 1 - i)){
	   	  r++;
	   }else{
	   	  break;
	   }	
	}
	int m = r + l;

	if(m >= 10)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
    }
	return 0;
}
