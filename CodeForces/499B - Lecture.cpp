//11081658	2015-05-12 23:11:17	Hiasat98	499B - Lecture	GNU C++	Accepted	187 ms	400 KB
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n , m;
	cin >> n >> m;
	vector< pair<string,string> > p;
	string r , k;
	for(int i = 0; i < m; i++){
		cin >> r >> k;
		p.push_back( make_pair<string,string>(r,k) );
	}
	string val;
	string res = "";
	for(int i = 0 ; i < n ; i++){
		cin >> val;
		for(int x = 0 ; x < p.size();x++){
			if(p[x].first == val || p[x].second == val){
				string f  = p[x].first;
				string s = p[x].second;
				if(min(f.length(),s.length()) == f.length()){
					res += f + " ";
				}else{
					res += s + " ";
				}
			}
		}
	}
	cout << res << endl;
}
