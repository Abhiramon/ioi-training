//11349706	2015-05-29 21:49:06	Hiasat98	155A - I_love_\%username\%	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int n,mn,mx,cnt = 0,a;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		if(i == 0){
			mn = a;
			mx = a;
		}else{
			if(a > mx){
				cnt++;
			}else if(a  < mn){
				cnt++;
			}
			mn = min(mn,a);
			mx = max(mx,a);
		}
	}
	cout << cnt << endl;
	return 0;
}
