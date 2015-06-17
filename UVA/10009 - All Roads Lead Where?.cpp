#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;

map<string, vector<string> > v;

string bfs(string s,string e){
	map<string,int> vis;
	map<string,string> path;
	queue<string> q;
	q.push(s);
	vis[s] = 1;
	path[s] = s.at(0);
	while(!q.empty()){
		string src = q.front();
		q.pop();
		if(src == e){
			return path[e];
		}
		for(int i = 0 ; i < v[src].size();i++){
			if(vis[v[src][i]] == 0){
				vis[v[src][i]] = 1;
				path[v[src][i]] = path[src] + v[src][i].at(0);
				q.push(v[src][i]);
			}
		}
	}
	return "";
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		v.clear();
		for(int i = 0 ; i < n ; i++){
			string k,r;
			cin >> k >> r;
			v[k].push_back(r);
			v[r].push_back(k);
		}
		for(int i = 0; i < m ; i++){
			string s,e;
			cin >> s >> e;
			cout << bfs(s,e) << endl;
		}
		if(t != 0)
			cout << endl;
	}
	return 0;
}
