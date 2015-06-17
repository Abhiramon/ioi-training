//11449517 	2015-06-05 18:33:10 	Hiasat98 	192A - Funky Numbers 	GNU C++ 	Accepted 	30 ms 	0 KB 
#include <iostream>
#include <cmath>
using namespace std;

long long t(int a){
	return (a * (a + 1));
}
int main() {
	long long n;
	cin >> n;
	n *= 2;
	for(int i = 1 ; i * i <= n ; i++){
		int n1 = n - t(i);
		int j = sqrt(n1);
		if(j > 0 && t(j) == n1){
			cout << "YES" << endl;
			return 0;			
		}
	}
	cout << "NO" << endl;
	return 0;
}
