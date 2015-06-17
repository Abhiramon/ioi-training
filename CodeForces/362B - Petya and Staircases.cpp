//11489192 	2015-06-07 18:09:32 	Hiasat98 	362B - Petya and Staircases 	GNU C++ 	Accepted 	30 ms 	0 KB 
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,m,V[3001], s = 0;
	cin >> n >> m;
	int step = 0;
	for(int i = 0 ; i < m ; i++){
		cin >> V[i];
	}
	sort(V,V + m);
	if(V[0] == 1 || V[m - 1] == n){
		cout << "NO" << endl;
		return 0;
	}
	for(int i = 1 ; i < m ; i++){
		if(V[i] - V[i - 1] == 1) s++; else s =0;
		if(s >= 2){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
