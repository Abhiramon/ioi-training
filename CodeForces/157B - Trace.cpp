//11492491	2015-06-08 01:38:14	Hiasat98	157B - Trace	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
double PI = 3.1415926536;
vector<int> r;
int main(){
	int n,k;
	double sum = 0;
	cin >> n;
	r.push_back(0);
	for(int i = 0 ; i< n ; i++){
		cin >> k;
		r.push_back(k);
	}
	sort(r.begin(),r.end());
	for(int i = n ; i > 0 ; i-=2){
		sum += PI * r[i] * r[i] - PI * r[i -1] * r[i - 1];		
	}
	printf("%.9lf\n",sum);
	return 0;	
}
