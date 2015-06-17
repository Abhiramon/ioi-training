//11515363	2015-06-10 00:21:19	Hiasat98	129B - Students and Shoelaces	GNU C++	Accepted	62 ms	100 KB
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,m,a,b;
	cin >> n >> m;
	vector<int> v[101];
	bool d[101] = {};
	for(int i = 0 ; i < m ; i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int ans = 0;
	for(int i = 1 ; i <= n ; i++){
		vector<int> uu;
		for(int j = 1 ; j <= n;j++){
			if(!d[j]){
				int cnt = 0;
				for(int x = 0 ; x < v[j].size() ; x++){
					if(!d[v[j][x]]){
						cnt++;
					}
				}
				if(cnt == 1){
					uu.push_back(j);
				}
			}
		}
		if(uu.size() > 0){
			for(int o = 0 ; o < uu.size();o++){
				d[uu[o]] = true;
			}
			ans++;
		}
	}
	cout << ans << endl;
	return 0;	
}
