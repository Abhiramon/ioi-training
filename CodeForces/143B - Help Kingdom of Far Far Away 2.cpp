//11515706	2015-06-10 01:30:37	Hiasat98	143B - Help Kingdom of Far Far Away 2	GNU C++	Accepted	60 ms	0 KB
#include <iostream>
#include <vector>
using namespace std;
int main(){
	string x;
	cin >> x;
	string ans = x.find("-") != string::npos ? "(" : "";
	ans += "$";
	int digit = 2;
	bool ad = false;
	int start = x.find("-") != string::npos ? 1 : 0;
	int end = x.find(".") != string::npos? x.find(".") : x.length();
	end -= start;
	for(int i = 0 ; i < x.length();i++){
		if(i > start && (end - (i - start)) % 3 == 0 && i < end && !ad){
			ans += ',';
		}
		if(x.at(i) != '-' && !ad){
			ans += x.at(i);
		}
		if(digit > 0 && ad){
			ans += x.at(i);
			digit--;
		}
		if(x.at(i) == '.'){
			ad = true;
		}
	}
	if(!ad)
		ans += '.';
	if(digit > 0){
		for(int i = 0 ; i < digit;i++){
			ans += '0';
		}
	}
	ans += x.find("-") != string::npos ? ")" : "";
	cout << ans << endl;
	return 0;	
}
