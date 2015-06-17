//11515187	2015-06-09 23:49:29	Hiasat98	359B - Permutation	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0 ; i < n ; i++){
		if(k > 0)
			cout << (2 * i + 2) << " " << (2 * i + 1) << " ";
		else 
			cout << (2 * i + 1) << " " << (2  * i + 2) << " ";
		k--;
	}
	return 0;	
}
