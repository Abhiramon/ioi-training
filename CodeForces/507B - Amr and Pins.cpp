//11091921	2015-05-13 21:09:04	Hiasat98	507B - Amr and Pins	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long r,x,y,x1,y1;
	cin >> r >> x >> y >> x1 >> y1;
	cout << ceil(sqrt(pow(x-x1,2) + pow(y-y1,2)) / (2*r));
}
