//11451864	2015-06-05 22:56:58	Hiasat98	393A - Nineteen	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt[4] = {};
	for(int i = 0 ; i < s.length();i++){
		if(s.at(i) == 'n'){
			cnt[0]++;
		}else if(s.at(i) == 'i'){
			cnt[1]++;
		}else if(s.at(i) == 'e'){
			cnt[2]++;
		}else if(s.at(i) == 't'){
			cnt[3]++;
		}
	}
	int tmp = cnt[0];
	int d = 3;
	int c = 0;
	while(tmp >= d){
		tmp-=d;
		if(d > 2){
			d--;
		}
		c++;
	}
	cnt[0] = c;
	cnt[2] /= 3;
	int ans = cnt[0];
	for(int i = 0 ; i < 4;i++){
		ans = min(cnt[i],ans);
	}
	cout << ans << endl;
	return 0;	
}
