//11008275	2015-05-05 21:41:44	Hiasat98	1A - Theatre Square	GNU C++	Accepted	60 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long n,m,a;
	cin >> n >> m >> a;
	long long r =  ceil(m/ (a + 0.000000)) * ceil(n/(a + 0.00000));
	cout << r << endl;
	return 0;
}
