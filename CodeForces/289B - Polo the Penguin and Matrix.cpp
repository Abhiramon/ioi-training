//11503405	2015-06-09 00:38:31	Hiasat98	289B - Polo the Penguin and Matrix	GNU C++	Accepted	62 ms	100 K
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;

int main() {
	int n,m,k,d,ans = 0;
	bool c = true;
	cin >> n >> m >> d;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> k;
			v.push_back(k);
		}
	}
	sort(v.begin(),v.end());
	int r = v[(v.size() / 2)];
	for(int i = 0 ; i < v.size();i++){
		if(v[i] < r){
			ans += ((r - v[i])/ d);
			v[i] += ((r - v[i])/ d) * d;
		}else if(v[i] > r){
			ans += ((v[i]- r)/ d);
			v[i] -= ((v[i]- r)/ d) * d;
		}
		if(v[i] != r){
			c = false;
		}
	}
	cout << (c ? ans : -1) << endl;
	return 0;
}
