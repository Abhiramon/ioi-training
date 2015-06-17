//11437323	2015-06-05 00:20:06	Hiasat98	416A - Guess a number!	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int R = -2 * 1000000000;
	int L = 2 * 1000000000;
	for(int i = 0 ; i < n ; i++){
		string a,c;
		int b;
		cin >> a >> b >> c;
		if(c == "N"){
			if(a == ">="){
				a = "<";
			}else if(a == ">"){
				a = "<=";
			}else if(a == "<="){
				a = ">";
			}else if(a == "<"){
				a = ">=";
			}
		}
		if(a[0] == '>'){
			if(a.length() > 1){
				R = max(R,b);
			}else{
				R = max(R,b + 1);
			}
		}
		if(a[0] == '<'){
			if(a.length() > 1){
				L = min(L,b);
			}else{
				L = min(L,b - 1);
			}
		}
	}
	if(R > L){
		cout << "Impossible" << endl;
	}else{
		cout << L << endl;
	}
	return 0;	
}
