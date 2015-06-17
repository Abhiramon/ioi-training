//11437773	2015-06-05 01:28:44	Hiasat98	257A - Sockets	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <algorithm>

using namespace std;


int main(){
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> v;
	for(int i = 0 ; i < n ; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	if(k >= m){
		cout << "0" << endl;
		return 0;
	}
	int t = 0;
	t += k;
	sort(v.begin(),v.end());
	int cnt = 0;
	for(int i = v.size() -1 ; i >= 0 ; i--){
		t += v[i];
		t--;
		cnt++;
		if(t >= m){
			cout << cnt << endl;
			return 0;
		}
	}
	cout << "-1" << endl;
	return 0;	
}
