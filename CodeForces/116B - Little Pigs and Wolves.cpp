//11497521	2015-06-08 15:17:29	Hiasat98	116B - Little Pigs and Wolves	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int n , m;
	char c[20][20];
	cin >> n >> m;
	for(int x = 1 ; x <= n ; x++){
		for(int y = 1 ; y <= m ; y++){
			cin >> c[x][y];
		}
	}
	int ans = 0;
	for(int x = 1 ; x <= n ; x++){
		for(int y = 1 ; y <= m ; y++){
			if(c[x][y] != 'W')
				continue;
			if(c[x-1][y] == 'P' || c[x][y - 1] == 'P' || c[x + 1][y] == 'P' || c[x][y + 1] == 'P') ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
