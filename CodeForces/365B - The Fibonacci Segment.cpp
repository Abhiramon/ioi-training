//11492425	2015-06-08 01:20:41	Hiasat98	365B - The Fibonacci Segment	GNU C++	Accepted	218 ms	400 KB
#include <iostream>
using namespace std;
int A[100001] = {};
int main(){
	int n,mx = 0 , step = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int k;
		cin >> k;
		A[i] = k;
		if(k == A[i - 1] + A[i - 2] || i < 2){
			step++;
		}else{
			step = 2;
		}
		mx = max(mx,step);
	}
	cout << mx << endl;
	return 0;	
}
