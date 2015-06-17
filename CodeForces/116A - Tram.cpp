//11367313	2015-05-31 16:30:03	Hiasat98	116A - Tram	GNU C++	Accepted	60 ms	0 KB
#include <iostream>
using namespace std;

int main() {

	int mn = 0;
	int n = 0;
	int curr = 0;
	cin >> n;
	for(int i = 0 ; i< n ; i++){
		int a, b;
		cin >> a >> b;
		curr -= a;
		curr += b;
		mn = max(mn,curr);
	}
	cout  << mn << endl;
	return 0;
}
