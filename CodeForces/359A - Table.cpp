//11276163	2015-05-26 12:18:16	Hiasat98	359A - Table	GNU C++	Accepted	31 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int n , m;
	cin >> n >> m;
	for(int i = 0 ; i < n ;i++){
		for(int x = 0 ; x < m ; x++){
			char a;
			cin >> a;
			if(a == '1' && (i == 0 || i  == n - 1 || x == m - 1 || x == 0)){
				cout << 2 << endl;
				return 0;
			}
		}
	}
	cout << 4 << endl;
}
