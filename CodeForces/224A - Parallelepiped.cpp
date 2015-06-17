//11269167	2015-05-25 21:45:38	Hiasat98	224A - Parallelepiped	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long a , b, c;
	cin >> a >> b >> c;
	long long r = sqrt(b * a * c);
	cout << 4 * (r/a + r/b + r/c) << endl;
	return 0;
}
