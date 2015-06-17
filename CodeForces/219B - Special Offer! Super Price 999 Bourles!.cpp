//11526038	2015-06-10 23:54:37	Hiasat98	219B - Special Offer! Super Price 999 Bourles!	GNU C++	Accepted	62 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	long long p,d,ans;
	cin >> p >> d;
	ans = ++p;
	for(long long i = 10 ; i <= 1000000000000000000 ; i *= 10){
		if(p%i <= d){
			ans = p - p % i;
		}
	}
    cout << (ans - 1) << endl;
	return 0;	
}
