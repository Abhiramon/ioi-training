//11512206	2015-06-09 17:59:36	Hiasat98	66B - Petya and Countryside	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,k,ans = 0;
	cin >> n;
	vector<int> v;
	for(int i = 0 ; i < n ; i++){
		cin >> k;
		v.push_back(k);
	}
	for(int i = 0 ; i < n ; i++){
		int cnt = 1;
		for(int x = i + 1 ; x < n ; x++){
			if(v[x] <= v[x - 1]) cnt++; else break;
		}
		for(int x = i - 1; x >= 0;x--){
			if(x == 0 || v[x] <= v[x + 1]) cnt++; else break;
		} 
		ans = max(ans,cnt);
	}
	cout << ans << endl;
	return 0;	
}
