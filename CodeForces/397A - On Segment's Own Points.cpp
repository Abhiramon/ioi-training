//11452199	2015-06-05 23:45:41	Hiasat98	397A - On Segment's Own Points	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	int l , r;
	cin >> l >> r;
	int used[101] = {};
	for(int i = 0 ; i < n - 1 ; i++){
		int a , b;
		cin >> a >> b;
		for(int j = a ; j < b ; j++){
			used[j]++;
		}
	}
	int cnt = 0;
	for(int i = l ; i < r ; i++){
		if(used[i] == 0){
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;	
}
