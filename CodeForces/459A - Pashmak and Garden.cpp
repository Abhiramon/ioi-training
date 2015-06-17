//11065549	2015-05-10 22:10:03	Hiasat98	459A - Pashmak and Garden	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	cin >> x1 >> y1 >> x2 >> y2;
	int xx = abs(x1 - x2);
	int yy = abs(y1 - y2);
	if(x1 != x2 && y1 != y2 &&  xx != yy){
		cout << -1 << endl;
	}else if(x1 == x2){
		x3 = x1 + yy;
		x4 = x2 + yy;
		y3 = y1;
		y4 = y2;
		cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
	}else if(y1 == y2){
		x3 = x1;
		x4 = x2;
		y3 = y1 + xx;
		y4 = y2 + xx;
		cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
	}else 
		cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
}
