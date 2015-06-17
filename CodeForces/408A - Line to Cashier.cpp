//11275169	2015-05-26 10:53:50	Hiasat98	408A - Line to Cashier	GNU C++	Accepted	30 ms	100 KB
#include <iostream>
#include <vector>

using namespace std;

int V[101] = {};
vector<int> h[101];

int main(){
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int a;
		cin >> a;
		V[i] = a;
	}
	for(int i = 0 ; i < n ; i++){
		for(int x = 0 ; x < V[i] ; x++){
			int r;
			cin >> r;
			h[i].push_back(r);
		}
	}
	int ans = 1000000000;
	for(int i = 0 ;i < n ; i++){
		int tt = 0;
		for(int x = 0 ; x < h[i].size() ; x++){
			tt += (h[i][x] * 5);
		}
		ans = min(ans , tt + V[i] * 15);
	}
	cout << ans << endl;
	return 0;	
}
