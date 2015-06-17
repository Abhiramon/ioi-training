//11514281	2015-06-09 21:51:03	Hiasat98	182B - Vasya's Calendar	GNU C++	Accepted	60 ms	0 KB
#include <iostream>
using namespace std;
int main(){
	int d,n,k;
	cin >> d >> n;
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> k;
		if(i < n - 1)
			ans +=  d - k > 0 ?  d - k : 0;
	}
	cout << ans << endl;
	return 0;	
}
