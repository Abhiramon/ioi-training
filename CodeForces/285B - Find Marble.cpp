//11452409	2015-06-06 00:19:48	Hiasat98	285B - Find Marble	GNU C++	Accepted	374 ms	1000 KB
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> v;
int main(){
	int n,s,t;
	cin >> n >> s >> t;
	v.push_back(-1);
	for(int i = 1 ; i <= n ; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	int k = 0;
	while(k < n){
		if(s == t){ cout << k << endl; return 0; };
		s = v[s];
		k++;
	}
	cout << -1 << endl;
	return 0;
}
