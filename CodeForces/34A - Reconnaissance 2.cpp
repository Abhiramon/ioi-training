//11435703	2015-06-04 22:30:40	Hiasat98	34A - Reconnaissance 2	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v;
	int mn = 0;
	for(int i = 0 ; i < n ; i++){
		int a;
		cin >> a;
		mn = max(mn,a);
		v.push_back(a);
	}	
	int s = 0 , f = 0;
	for(int x = 0; x < n ; x++){
		int y = x+ 1;
			if(y < n){
				if(abs(v[x] - v[y]) < mn){
					mn = abs(v[x] - v[y]);
					s = x;
					f = y;
				}
			}
	}
	if(abs(v[0] - v[n - 1]) < mn){
		s = 0;
		f = n - 1;
	}
	cout << (s + 1) << " " << (f + 1) << endl;
	return 0;	
}
