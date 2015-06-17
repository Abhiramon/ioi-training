//11063827	2015-05-10 18:30:54	Hiasat98	268A - Games	GNU C++	Accepted	60 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int h[31];
	int k[31];
	int u,p;
	int count = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> u >> p;
		h[i] = u;
		k[i] = p;
	}
	for(int i = 0 ; i < n ; i++){
		for(int x = 0 ; x < n ; x++){
			if(h[i] == k[x]){
				count++;
			}
		}
	}
	cout << count << endl;

	return 0;
}
