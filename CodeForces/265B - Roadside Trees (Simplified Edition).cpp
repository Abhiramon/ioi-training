//11323648	2015-05-27 20:34:41	Hiasat98	265B - Roadside Trees (Simplified Edition)	GNU C++	Accepted	374 ms	1000 KB
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	int step = 0;
	vector<int> v;
	for(int i = 0 ; i < n ; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	int start = 0;
	for(int i = 0 ; i < n ; i++){
		int curr = v[i];
		if(i != 0){
			while(start > curr){
				start--;
				step++;
			}
			step++;
		}
		while(start < curr){
			start++;
			step++;
		}
		step++;
	}
	cout <<  step << endl;
	return 0;
}
