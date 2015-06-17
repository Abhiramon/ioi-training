//11004879	2015-05-05 15:01:57	Hiasat98	476A - Dreamoon and Stairs	GNU C++	Accepted	15 ms	
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n , m;
	cin >> n >> m;
	if(n < m){
		cout << -1 << endl;
		return 0;
	}
	vector <int> v;
	while( n >= 2){
		v.push_back(2);
		n -=2;
	}
	while(n > 0){
		v.push_back(1);
		n -=1;
	}
	int step = v.size();
	while(step % m != 0){
		bool found = false;
		for(int r = 0 ; r < v.size();r++){
			if(v[r] == 2){
				v.erase(v.begin() + r);
				v.push_back(1);
				v.push_back(1);
				found = true;
				step++;
				break;
			}
		}
		if(!found || (max(m,step) % min(step,m) == 0)){
			break;
		}
	}
	if (max(m,step) % min(step,m) == 0){
		cout << step << endl;
	}
 	return 0;
}
