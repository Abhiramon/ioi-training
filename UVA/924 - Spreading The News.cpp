#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>

using namespace std;

int mx = 0,md = 0;
vector<int> h[2500];

void bfs(int u){
	bool vis[2500] = {};
	int dist[2500] = {};
	int boom[2500] = {};
	queue<int> q;
	q.push(u);
	dist[u] = 1;
	vis[u] = true;
	while(!q.empty()){
		int src = q.front();
		q.pop();
		for(int i = 0 ; i < h[src].size();i++){
			if(!vis[h[src][i]]){
				dist[h[src][i]] = dist[src] + 1;
				boom[dist[src]]++;
				vis[h[src][i]] = true;
				q.push(h[src][i]);
			}
		}
		if(boom[dist[src]] > mx){
			mx = boom[dist[src]];
			md = dist[src];
		}
	}
}
int main() {
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int k;
		cin >> k;
		for(int x = 0 ; x < k ; x++){
			int a;
			cin >> a;
			h[i].push_back(a);
		}
	}
	int t;
	cin >> t;
	while(t--){
		int r;
		cin >> r;
		md = 0;
		mx = 0;
		bfs(r);
		if(mx == 0)
			cout << "0" << endl;
		else
			cout << mx << " " << md << endl;
	}
	return 0;
}
