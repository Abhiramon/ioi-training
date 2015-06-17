//11543563 	2015-06-12 15:36:41 	Hiasat98 	231B - Magic, Wizardry and Wonders231B - Magic, Wizardry and Wonders 	GNU C++ 	Accepted 	62 ms 	0 KB 
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,d,l;
	cin >> n >> d >> l;
	vector<int> v;
	for(int i = 0 ; i < n - 1 ; i++){
		if(d > 0)
			v.push_back(l);
		else v.push_back(1);
		d = v[i] - d;
	}
	if(d < 1 || d > l){
		cout << -1 << endl;
	}else{
		v.push_back(d);
		for(int i = 0 ; i < v.size() ; i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
