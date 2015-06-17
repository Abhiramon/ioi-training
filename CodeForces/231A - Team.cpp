//11366901	2015-05-31 15:54:28	Hiasat98	231A - Team	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int t = 0;
	for(int i = 0 ; i < n;i++){
		int a , b , c;
		cin >> a >> b >> c;
		int cnt = 0;
		if(a == 1)
			cnt++;
		if(b == 1)
			cnt++;
		if(c == 1)
			cnt++;
		if(cnt >= 2){
			t++;
		}
	}
	cout << t << endl;
	return 0;
}
