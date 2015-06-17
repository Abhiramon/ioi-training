//11511309	2015-06-09 17:34:41	Hiasat98	416B - Art Union	GNU C++	Accepted	405 ms	1400 KB
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int m , n;
	cin >> m >> n;
	int p[50001][6] = {};
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> p[i][j];
		}
	}
	int ans[50001] = {};
	for(int i = 0 ; i < n ; i++){
		int f = 0;
		for(int x = 0 ; x < m ; x++){
			int s = max(f,ans[x]);
			ans[x] = s + p[x][i];
			f = ans[x];
		}
	}
	for(int i = 0 ; i < m ; i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;	
}
