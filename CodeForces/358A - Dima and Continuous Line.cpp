//11435390	2015-06-04 22:20:47	Hiasat98	358A - Dima and Continuous Line	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector< pair<int,int> > v;
	vector<int> num;	
	for(int i = 0 ; i < n ; i++){
		int a;
		cin >> a;
		num.push_back(a);
		if(i > 0){
			int b = num[i - 1];
			v.push_back(make_pair(min(a,b),max(a,b)));
		}
	}
	for(int i = 0 ; i < v.size();i++){
		for(int x = 0 ; x < v.size();x++){
			if(i == x)
				continue;
			pair<int,int> p1 = v[i];
			pair<int,int> p2 = v[x];
		//	cout << p1.first << " " << p1.second << " " << p2.first << " " << p2.second << endl;
			if(p1.first < p2.first && p1.second < p2.second &&  p1.second > p2.first){
				cout << "yes" << endl;
				return 0;
			}
			if(p2.first < p1.first && p2.second < p1.second&&  p2.second > p1.first){
				cout << "yes" << endl;
				return 0;
			}
		}
	}
	cout << "no" << endl;
	return 0;
}
