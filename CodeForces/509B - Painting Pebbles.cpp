//11490826	2015-06-07 21:20:19	Hiasat98	509B - Painting Pebbles	GNU C++	Accepted	30 ms	100 KB
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int N = 100;
int V[101] = {};
vector<int> C[100];

int main(){
	int n , k;
	cin >> n >> k;
		
	int m = 100000000;
	int mx = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> V[i];
		m = min(m,V[i]);
		mx = max(mx,V[i]);
	}
	m += 1;
	for(int i = 0 ; i < n ; i++){
		for(int j = 1 ; j <= V[i];j++){
			int x = 1;
			if(j > m){
				int r = j - m;
			    x = r > k ? (r % k) + 1: r;
			    x += 1;
			}
			C[i].push_back(x);
		}

	}	
	if(mx + 1 - m <= k){
		cout << "YES" << endl;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < C[i].size(); j++){
				cout << C[i][j] << " ";
			}
			cout << endl;
		}
	}else{
		cout << "NO" << endl;
	}
	return 0;	
}
