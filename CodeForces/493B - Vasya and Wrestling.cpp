//11492242	2015-06-08 00:45:52	Hiasat98	493B - Vasya and Wrestling	GNU C++	Accepted	514 ms	4700 KB
#include <iostream>
#include <list>
#include <cmath>
using namespace std;

list<long long> k[2];
long long a[2] = {};
int main(){
	int n,d;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> d;
		k[d < 0].push_back(abs(d));
		a[d < 0] += abs(d);
	}
	k[0].push_front(a[0]);
	k[1].push_front(a[1]);
	if(k[0] == k[1]) k[d < 0].push_back(1);
	cout << (k[0] > k[1] ? "first" : "second") << endl;
	return 0;	
}
