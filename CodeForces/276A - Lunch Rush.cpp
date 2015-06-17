//11073237	2015-05-11 22:43:24	Hiasat98	276A - Lunch Rush	GNU C++	Accepted	122 ms	0 KB
#include <iostream>

using namespace std;

int main() {
	int n , k;
	cin >> n >> k;
	int t,f;
	int m = 0;
	for(int i = 0; i < n;i++){
		cin >> f >> t;
		if(i == 0){
			if(k >= t){
				m = f;
			}else{
				m = f - (t - k);
			}
		}else{
			if(k >= t){
				m = max(m,f);
			}else{
				m = max(m, f - (t - k));
			}
		}
	}
	cout << m << endl;
	return 0;
}
