//11065716	2015-05-10 22:36:00	Hiasat98	490A - Team Olympiad	GNU C++	Accepted	31 ms	100 KB
#include <iostream>
#include <vector>

using namespace std;

vector<int> p,m,s;

int main(){
	int n;
	cin >> n;
	int val;
	for(int i = 1 ; i <= n ;i++){
		cin >> val;
		if(val == 1){
			p.push_back(i);
		}else if(val == 2){
			m.push_back(i);
		}else if(val == 3){
			s.push_back(i);
		}
	}
	int team = min(s.size(),min(p.size(),m.size()));
	cout << team << endl;
	for(int i = 0 ; i < team;i++){
		cout << s[i] << " " << p[i] << " " << m[i] << endl;
	}
}
