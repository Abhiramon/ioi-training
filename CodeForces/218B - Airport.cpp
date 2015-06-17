//11354533	2015-05-30 11:39:42	Hiasat98	218B - Airport	GNU C++	Accepted	60 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	int a[1001]= {};
	int tt[1001] = {};
	
	for(int i = 0 ; i < m;i++){
		int k;
		cin >> k;
		a[k]++;
		tt[k]++;
	}
	int mn = 0;
	int mx = 0;
	
	int tmpn = n;
	for(int i = 1000 ; i > 0;i--){
		while(a[i] > 0 && n > 0){
			mx += i;
			a[i]--;
			a[i - 1]++;
			n--;
		}
	}
	while(tmpn > 0){
		for(int i = 1 ; i < 1001;i++){
			if(tt[i] > 0){
				mn += i;
				tt[i]--;
				tt[i - 1]++;
				tmpn--;
				break;
			}
		}
	}
	cout << mx << " " << mn << endl;
	return 0;
}
