//11489825 	2015-06-07 19:21:03 	Hiasat98 	469B - Chat Online 	GNU C++ 	Accepted 	30 ms 	0 KB
#include <iostream>
#include <vector>

using namespace std;

vector< pair<int,int> > first;
vector< pair<int,int> > second;

int main(){
	int p,q,l,r;
	cin >> p >> q >> l >> r;
	for(int i = 0 ; i < p ; i++){
		int a , b;
		cin >> a >> b;
		first.push_back(make_pair(a,b));
	}
	for(int i = 0 ; i < q ; i++){
		int a , b;
		cin >> a >> b;
		second.push_back(make_pair(a,b));
	}
	int cnt = 0;
	while(l <= r){
		bool found = false;
		for(int i = 0 ; i < q ; i++){
			for(int j = 0 ; j < p ; j++){
				pair<int,int> p1 = second[i],p2 = first[j];
				p1.first += l;
				p1.second += l;
 				if(p2.second >= p1.first && p2.second <= p1.second){
					found = true;
				}
				if(p2.first >= p1.first && p2.first <= p1.second){
					found = true;
				}
				if(p2.first <= p1.first && p2.second >= p1.second){
					found = true;
				}
			}
		}
		if(found) cnt++;
		l++;
	}
	cout << cnt << endl;
	return 0;	
}
