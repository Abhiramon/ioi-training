//11057578	2015-05-09 22:35:57	Hiasat98	112A - Petya and Strings	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>
#include <string> 

using namespace std;

int main(){
	string s;
	string st;
	cin >> s >> st;
	transform(s.begin(),s.end(),s.begin(), ::tolower);
	transform(st.begin(),st.end(),st.begin(), ::tolower);
	int ts = 0;
	int tt = 0;
	for(int i = 0 ; i < s.length();i++){
		ts =(int) s.at(i);
		tt =(int) st.at(i);
		if(ts != tt){
			if(ts > tt){
				cout << 1 << endl;
				return 0;
			}else{
				cout << -1 << endl;
				return 0;
			}
		}
	}
	cout << 0 << endl;
}
