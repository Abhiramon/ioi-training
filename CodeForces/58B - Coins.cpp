//11503562	2015-06-09 01:09:42	Hiasat98	58B - Coins	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n > 0){
		cout << n << " ";
		if(n == 1)
			return 0;
		for(int i = 2 ; i <= n ; i++){
			if(n % i == 0){
				n /= i;
				break;
			}
		}
	}
	return 0;	
}
