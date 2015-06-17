//11485924	2015-06-07 14:15:24	Hiasat98	448B - Suffix Structures	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>
using namespace std;

int a[30]  = {};

int main() {
	string s, t;
	cin >> s >> t;
	int cnt = 0;
	bool au = false;
	for(int i = 0 ; i < s.length();i++){
		if(cnt < t.length() && s[i] == t[cnt]){
			cnt++;
		}
		if(cnt == t.length())
			au = true;
	}
	bool ar = true;
	bool all = true;
	for(int i = 0 ; i < s.length();i++) a[s.at(i) - 'a']++;
	for(int i = 0 ; i < t.length();i++) a[t.at(i) - 'a']--;
	for(int i = 0 ; i < 30;i++){
		ar = ar & (a[i] == 0);
		all = all && (a[i] >= 0) ;
	}
	if(au)
		cout << "automaton" << endl;
	else if(ar)
		cout << "array" << endl;
	else if(all)
		cout << "both" << endl;
	else  cout << "need tree" << endl;
	
	return 0;
}
