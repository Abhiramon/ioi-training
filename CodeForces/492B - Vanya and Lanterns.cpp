//11081351	2015-05-12 22:11:52	Hiasat98	492B - Vanya and Lanterns	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,l;
	cin >> n >> l;
	vector<int> v;
	int val;
	for(int i = 0 ; i < n ; i++){
		cin >> val;
		v.push_back(val);
	}
	sort(v.begin(),v.end());
	double m = v[0];
	for(int i = 1 ; i < n ; i++){
		double p = v[i] - v[i- 1];
		p /= 2;
		m = max(m,p);
		if(i == n - 1){
			p = (l - v[i] );
			m = max(m,p);
		}
	}
	double x = l - v[v.size() - 1];
	m = max(m,x);
	
	cout.precision(10);
	cout << fixed << m << endl;
}
