//11492531	2015-06-08 01:46:56	Hiasat98	34B - Sale	GNU C++	Accepted	62 ms	0 KB
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int m , n , k , sum = 0;
	vector<int> s;
	cin >> m >> n;
	for(int i = 0 ; i < m ; i++){
		cin >> k;
		if(k < 0)
			s.push_back(k);
	}
	sort(s.begin(),s.end());
	for(int i = 0 ; i < s.size(); i++){
		if(n == 0)
			break;
		sum += abs(s[i]);
		n--;
	}
	cout << sum << endl;
}
