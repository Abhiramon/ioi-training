//11100687	2015-05-14 19:57:46	Hiasat98	96A - Football	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	string r;
	cin >> r;
	int f = 0 , s = 0;
	int mf  = 0 , ms = 0;
	for(int i = 0 ; i < r.length();i++){
		if(r.at(i) == '0'){
			f++;
			ms = max(ms,s);
			s = 0;
		}
		if(r.at(i) == '1'){
			s++;
			mf = max(mf,f);
			f = 0;
		}
	}
	mf = max(mf,f);
	ms = max(ms,s);
	cout << (max(mf,ms) >= 7 ? "YES" : "NO") << endl;
	return 0;
}
