//11065657	2015-05-10 22:26:05	Hiasat98	230A - Dragons	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int s , n;
	cin >> s >> n;
	vector< pair<int,int> > r ;
	int x , y;
	for(int i = 0 ; i < n ;i++){
		cin >> x >> y;
		r.push_back( make_pair<int,int>(x,y));
	}
	sort(r.begin(),r.begin() + r.size());
	bool lost = false;
	for(int i = 0 ; i < r.size();i++){
    	if(s > r[i].first){
            s += r[i].second;
        }else{
            lost = true;
            break;
        }
	}
	cout << (lost ? "NO" : "YES") << endl;
}
