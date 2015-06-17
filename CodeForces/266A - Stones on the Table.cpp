//11350087	2015-05-29 22:28:56	Hiasat98	266A - Stones on the Table	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	string r;
	cin >> r;
	char prev;
	prev = r.at(0);
	int cnt = 0;
	for(int i = 1 ; i < n;i++){
		if(r.at(i) == prev){
			cnt++;
		}
		prev = r.at(i);
	}
	cout << cnt << endl;
}
