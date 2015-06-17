//11193736	2015-05-21 21:02:19	Hiasat98	486A - Calculating Function	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long n;
	cin >> n;
	cout << (n % 2 == 0 ? n / 2 : -1 * (n + 1) / 2);
	return 0;
}
