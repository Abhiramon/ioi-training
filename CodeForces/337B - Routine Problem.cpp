//11513279	2015-06-09 19:58:25	Hiasat98	337B - Routine Problem	GNU C++	Accepted	30 ms	
#include <iostream>
using namespace std;
int gcd(int a , int b){
	if(b == 0)
		return a;
	return gcd(b,a % b);
}
int main(){
	int a , b , c , d;
	cin >> a >> b >> c >> d;
	int x = a * d , y = b * c;
	int u = max(x,y),t = min(x,y);
	t = u - t;
	int o = gcd(t,u);
	cout << (t/o) << "/" << (u/o)<< endl;
	return 0;	
}
