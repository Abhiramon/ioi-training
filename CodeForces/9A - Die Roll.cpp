//11014061	2015-05-06 17:59:09	Hiasat98	9A - Die Roll	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;


int main() {
	int y,w;
	cin >> y >> w;
	int d = 6;
	int n = 6 - max(y,w) + 1;
	for(int i = d ; i > 0 ; i--){
		if(d % i == 0 &&  n % i == 0){
			d /= i;
			n /= i;
		}
	}
	cout << n << "/" << d << endl;
	return 0;
}
