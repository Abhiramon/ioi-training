//11503507	2015-06-09 01:00:07	Hiasat98	366B - Dima and To-do List	GNU C++	Accepted	31 ms	
#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

vector<int> v;
int n,k,mn = -1,r;

int main(){
	scanf("%d %d", &n , &k);
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&r);
		v.push_back(r);
	}
	int ans = 0;
	for(int i = 0; i < k; i++){
		int nxt = i,sum = 0;
		while(nxt < v.size()){
			sum += v[nxt];
			nxt += k;
		}
		if(sum < mn || mn == -1){
			mn = sum;
			ans = i + 1;
		}
	}
	cout << ans << endl;
	return 0;	
}
