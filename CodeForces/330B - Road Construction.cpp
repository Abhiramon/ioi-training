//11492562	2015-06-08 01:57:11	Hiasat98	330B - Road Construction	GNU C++	Accepted	30 ms	0 KB
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int R[1001] = {};
	for(int i = 0 ; i < m ; i++){
		int a , b;
		cin >> a >> b;
		R[a]++;
		R[b]++;
	}
	for(int i = 1 ; i <= n ; i++){
		if(R[i] == 0){
			cout << n - 1 << endl;
			for(int j = 1 ; j <= n ; j++){
				if(j != i)
					cout << j << " " << i << endl;
			}
			return 0;
		}
	}
}
