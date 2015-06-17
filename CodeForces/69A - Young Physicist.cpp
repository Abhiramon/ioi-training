//11063935	2015-05-10 18:44:49	Hiasat98	69A - Young Physicist	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x,y,z;
	int tx = 0,ty = 0, tz = 0;
	for(int i = 0 ; i < n ;i++){
		cin >> x >> y >> z;
		tx += x;
		ty += y;
		tz += z;
	}
	cout << ((tx == 0 && ty == 0 && tz == 0) ? "YES" : "NO") << endl;
	return 0;
}
