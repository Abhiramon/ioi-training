//11275753	2015-05-26 11:43:37	Hiasat98	376A - Lever	GNU C++	Accepted	171 ms	2100 KB
#include <iostream>

using namespace std;

int main(){
	string lever;
	cin >> lever;
	long long mid = lever.find("^");
	long long a = 0;
	for(int i = 0; i < lever.length();i++){
		if(lever.at(i) != '=' && lever.at(i) !='^'){
			a += (lever.at(i) - '0') * (i - mid);
		}
	}
	cout << (a == 0 ? "balance" : (a < 0 ? "left" : "right"));
}
