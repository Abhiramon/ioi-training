//11350006	2015-05-29 22:20:57	Hiasat98	236A - Boy or Girl	GNU C++	Accepted	62 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	string r;
	cin >> r;
	int cnt[27] = {};
	for(int i = 0 ; i < r.length();i++){
		cnt[r.at(i) - 'a']++;
	}
	int c = 0;
	for(int i = 0 ; i < 27; i++){
		if(cnt[i] > 0 )
			c++;
	}
	cout << (c % 2 == 0 ? "CHAT WITH HER!" :"IGNORE HIM!") << endl;
}
