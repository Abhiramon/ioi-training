//11449100 	2015-06-05 17:55:47 	Hiasat98 	284A - Cows and Primitive Roots 	GNU C++ 	Accepted 	62 ms 	0 KB 
#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a , int b){
	return b == 0 ? a : gcd(b,a%b);
}
int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 1 ; i < n;i++){
		if(gcd(n -1,i) == 1)
			cnt++;

	}
	cout << cnt << endl;
	return 0;
}
