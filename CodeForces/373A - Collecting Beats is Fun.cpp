//11269864	2015-05-25 22:58:43	Hiasat98	373A - Collecting Beats is Fun	GNU C++	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int d[10] = {};

int main(){
	int k;
	cin >> k;
	for(int x = 0 ; x < 4  ; x++){
		for(int y = 0 ; y < 4 ; y++){
			char a;
			cin >> a;
			if(a != '.'){
				d[a - '0']++;
			}
		}
	}
	int ans = 0;
	for(int i = 0 ; i < 10 ; i++){
		ans = max(ans,d[i]);
	}
	cout << (ans <= 2 * k ? "YES" : "NO") << endl;
	
}
