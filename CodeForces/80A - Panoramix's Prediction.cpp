//11364680	2015-05-31 12:21:29	Hiasat98	80A - Panoramix's Prediction	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	for(int i = n +1 ; i <= m ; i++){
		bool prime = true;
		for(int j = 2 ; j * j <= i ; j++){
			if(i % j == 0){
				prime = false;
			}
		}
		if(prime){
			if(i == m){
				cout << "YES" << endl;
				return 0;
			}else {
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
