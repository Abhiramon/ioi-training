//11443585	2015-06-05 12:06:47	Hiasat98	298A - Snow Footprints	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> l;
	vector<int> r;
	for(int i = 1 ; i <= n ; i++){
		char a;
		cin >> a;
		if(a == 'L')
			l.push_back(i);
		else if(a == 'R')
			r.push_back(i);
	}
	if(r.size() > 0 && l.size() > 0){
		cout << r[0] << " " << l[0];
	}else if(r.size() > 0){
		cout << r[0] << " " << r[r.size() - 1] + 1;
	}else if(l.size() > 0){
		cout << l[l.size() - 1] << " " << l[0] - 1;
	}
	return 0;
}
