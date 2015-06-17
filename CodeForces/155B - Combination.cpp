//11498748	2015-06-08 17:10:25	Hiasat98	155B - Combination	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  	int n,a,b;
  	vector< pair<int,int> > v;
  	cin >> n;
  	for(int i = 0 ; i < n ; i++){
  		cin >> a >> b;
  		v.push_back( make_pair(b,a) );
  	}
  	sort(v.begin(),v.end());
  	int k = 1,ans = 0;
  	for(int i = v.size() - 1 ; i >= 0 ; i--){
  		if(k == 0)
  			break;
  		k += v[i].first;
  		ans += v[i].second;
  		k--;
  	}
  	cout << ans << endl;
    return 0;   
}
