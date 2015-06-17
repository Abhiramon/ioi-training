//11512436	2015-06-09 18:24:46	Hiasat98	312B - Archer	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
using namespace std;
int main(){
	double a , b , c ,d;
	cin >> a >> b >> c >> d;
	cout << (a * d) / (b * c + a * d - a * c) << endl;
	return 0;	
}
