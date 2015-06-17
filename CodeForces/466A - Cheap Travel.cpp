//11004704	2015-05-05 14:40:29	Hiasat98	466A - Cheap Travel	GNU C++	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main() {
	int n , m , a , b;
	cin >> n >> m >> a >> b;
	int p = b/m;
	if(p < a){
		int money = 0;
		while(n >= m){
			money += b;
			n -=m;
		}
		int l = min((money + (n*a)), money + b);
		cout << l  << endl;
	}else{
		cout << n * a;
	}
 	return 0;
}
