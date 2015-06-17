//11349289	2015-05-29 21:02:34	Hiasat98	37A - Towers	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int m[1001] = {};
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int a;
		cin >> a;
		m[a]++;
	}
	int cnt = 0;
	int mx = 0;
	for(int i = 0 ; i < 1001;i++){
		if(m[i] > 0)
			cnt++;
		mx = max(mx,m[i]);
	}
	cout << mx << " " << cnt << endl;
	return 0;
}
