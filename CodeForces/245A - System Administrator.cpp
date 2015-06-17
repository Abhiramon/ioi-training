//11349655	2015-05-29 21:43:26	Hiasat98	245A - System Administrator	GNU C++	Accepted	62 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int s[2] = {},t[2] = {};
	int n;
	cin >> n;
	for(int i = 0 ; i < n;i++){
		int a,b,c;
		cin >> a >> b >> c;
		t[a - 1] += b + c;
		s[a - 1] += b;
	}
	for(int i = 0 ; i < 2;i++){
		cout << (s[i] >= t[i]/2 ? "LIVE" : "DEAD") << endl;
	}
}
