//11064857	2015-05-10 20:31:54	Hiasat98	318A - Even Odds	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main() {
   	long long n , k;
   	cin >> n >> k;
   	if(n % 2 != 0){
   		n += 1;
   	}
   	if(k > n/2){
   		k -=n/2;
   		cout << (2 * k) << endl;
   	}else{
   	   	cout << (2 * k) - 1 << endl;
   	}
	return 0;
}
