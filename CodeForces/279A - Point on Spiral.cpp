//11443990	2015-06-05 12:37:05	Hiasat98	279A - Point on Spiral	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	int x , y , s = 0;
	cin >> x >> y;
	if(x>=y && (x+y)>1)
		s=4*x-3;
	else if(x<y && y>=-x)
		s=4*y-2;
	else if(y<-x && y>=x)
		s=4*(-x)-1;
	else
		s=4*(-y);

	cout << s << endl;
	return 0;
}
