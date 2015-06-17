//11514161	2015-06-09 21:35:07	Hiasat98	361B - Levko and Permutation	GNU C++	Accepted	77 ms	0 KB
#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	if(n == k)
		cout << -1 << endl;
	else{
		cout << n - k << " ";
		for(int i = 1 ; i <= n ; i++){
			if(i != n - k)
				cout << i << " ";
		}
	}
	return 0;	
}
