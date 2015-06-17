//11073290	2015-05-11 22:54:56	Hiasat98	151A - Soft Drinking	GNU C++	Accepted	60 ms	0 KB
#include <iostream>

using namespace std;

int main() {
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int slices = c * d;
	l = l * k;
	int t = l/nl;
	t = min(t,slices);
	t = min(t, p / np);
	t /= n;
	cout << t << endl;
	return 0;
}
