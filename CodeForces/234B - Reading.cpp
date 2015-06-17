//11514541	2015-06-09 22:18:55	Hiasat98	234B - Reading	GNU C++	Accepted	62 ms	200 KB
#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;
vector< pair<int,int> > v;
int U[1001] = {};

int main(){
	int n,k,a;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++){
		cin >> a;
		v.push_back(make_pair(a,i));
	}
	sort(v.begin(),v.end());
	vector< int  > ans;
	int mn = v[v.size() - 1].first;
	for(int i = v.size() - 1; i >= 0 ; i--){
		if(k == 0)
			break;
		mn = min(mn,v[i].first);
		U[v[i].second]++;
		k--;
	}
	cout << mn << endl;
	for(int i = 0 ; i < 1001 ; i++){
		if(U[i] > 0){
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;	
}
