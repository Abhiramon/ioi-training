//11065773	2015-05-10 22:45:28	Hiasat98	439A - Devu, the Singer and Churu, the Joker	GNU C++	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int n , d;
	cin >> n >> d;
	int total = 0;
	int val = 0;
	int jokes = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> val;
		total += val + (i == n - 1 ? 0 :  10);
		jokes += (i == n - 1 ? 0 : 2);
	}
	if(total < d){
		jokes += (d - total) /5;
	}
	if(total > d){
		cout << - 1 << endl;
	}else{
		cout << jokes << endl;
	}
}
