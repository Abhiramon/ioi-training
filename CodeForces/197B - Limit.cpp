//11544510 	2015-06-12 17:01:31 	Hiasat98 	197B - Limit 	GNU C++ 	Accepted 	30 ms 	0 KB
#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a ,int b){
	return b == 0 ? a : gcd(b,a%b);	
}
int main() {
	int n,m,a,b;
	cin >> n >> m >> a;
	for(int i = 0 ; i <= n ; i++) cin >> b;
	if(n > m){
		cout << (a * b > 0 ? "Infinity" : "-Infinity");
	}else if(n < m){
		cout << "0/1";
	}else{
		int k = gcd(a,b);
		a /= k,b/=k;
		if(a * b < 0) cout << "-";
		cout << abs(a) << "/" << abs(b);
	}
	return 0;
}
