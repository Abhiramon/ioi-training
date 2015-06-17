//11079341	2015-05-12 17:43:07	Hiasat98	C - Given Length and Sum of Digits...	GNU C++	Accepted	15 ms	16 KB
#include <iostream>
using namespace std;

int main() {
	int m , s;
	cin >> m >> s;
	int tm = m;
	int ts = s;
	string mx = "";
	string mn = "";
	while(tm > 0){
		if(ts > 9){
			mx += "9";
			ts -= 9;
		}else{
			mx += (char) ts + '0';
			ts = 0;
		}
		tm--;
	}
	tm = m;
	ts = s;
	int index = 0;
	while(tm > 0){
		if(ts > 9){
			mn = mn + "9";
			ts -= 9;
		}else if(ts == 1){
			if(index == m - 1){
				mn = '1' + mn;
				ts = 0;
			}else{
				mn = '0' + mn;
			}
		}else{
			mn =(char) ((m - 1 == index ) ? ts + '0': ts - 1 + '0') + mn;
			ts = 1;
			if(m - 1== index)
				ts = 0;
		}
		index++;
		tm--;
	}
	if(s == 0 && m == 1){
		cout << 0 << " " << 0 << endl;
	}else
	if(ts != 0 || s == 0){
		cout << -1 << " " << -1 << endl;
	}else{
		cout << mn << " " << mx << endl;
	}
	
	return 0;
}
