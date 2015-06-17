//11057699	2015-05-09 22:59:25	Hiasat98	160A - Twins	GNU C++	Accepted	30 ms	0 K
#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n == 0){
		cout << 0 << endl;
		return 0;
	}
	vector<int> v;
	int x =0;
	int total = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> x;
		total += x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int having = 0;
	int step = 0;
	int start = v.size() - 1;
	while(having <= total){
		having += v[start];
		total -= v[start];
		start--;
		step++;
	}
	cout << step << endl;
	return 0;
}
