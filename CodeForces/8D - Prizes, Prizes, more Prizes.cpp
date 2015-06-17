//11349851	2015-05-29 22:05:08	Hiasat98	208D - Prizes, Prizes, more Prizes	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	long long rp[5] = {};
	long long n,k;
	vector<int> v;
	vector< pair<int,int> > pr;
	cin >> n;
	long long tp = 0;
	
	for(int i = 0 ; i < n ; i++){
		cin >> k;
		v.push_back(k);
	}
	for(int i = 0 ; i < 5 ; i++){
		int a;
		cin >> a;
		pr.push_back(make_pair(a,i + 1));
	}
	sort(pr.begin(),pr.end());
	long long cnt[5] = {};
	for(int i = 0 ; i < v.size();i++){
		tp += v[i];
		for(int x = 4 ; x >= 0;x--){
			if(tp >= pr[x].first){
				long long xx = tp /pr[x].first;
				tp -= xx * pr[x].first;
				cnt[pr[x].second - 1] = cnt[pr[x].second - 1] + xx;
			}
		}
	}
	for(int i = 0 ; i < 5 ; i++){
		cout << cnt[i] << " ";
	}
	cout << endl;
	cout << tp << endl;
}
