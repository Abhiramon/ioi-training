//11364906	2015-05-31 12:51:53	Hiasat98	61A - Ultra-Fast Mathematician	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	string x;
	string d;
	cin >> x >> d;
	string r = "";
	for(int i = 0 ; i < x.length();i++){
		if(x.at(i) != d.at(i))
			r += "1";
		else r += "0";
	}
	cout << r << endl;
	return 0;
}
