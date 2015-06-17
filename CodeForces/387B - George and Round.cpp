//11492327	2015-06-08 01:01:52	Hiasat98	387B - George and Round	GNU C++	Accepted	31 ms	7800 KB
#include <iostream>
#include <list>
#include <cmath>
using namespace std;

const int N = 1000001;

int A[N],B[N];

int main(){
	int n , m;
	cin >> n >> m;
	for(int i = 0 ; i  < n ; i++){
		int k;
		cin >> k;
		A[k]++;
	}
	for(int i = 0 ; i < m ; i++){
		int k;
		cin >> k;
		B[k]++;
	}
	int cnt = 0;
	int f = 0;
	for(int i = N - 1 ; i >= 0 ; i--){
		if(A[i] > B[i]){
			int r = A[i] - B[i];
			if(f >= r){
				f -= r;
				r = 0;
			}else{
				r -= f;
				f = 0;
			}
			cnt += r;
		}else{
			f += B[i] - A[i];
		}
	}
	cout << cnt << endl;
	return 0;	
}
