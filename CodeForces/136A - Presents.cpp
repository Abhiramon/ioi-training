//11062098	2015-05-10 14:00:27	Hiasat98	136A - Presents	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int k;
	int a [101] = {};
	for(int i = 1 ; i <= n ; i++){
		cin >> k;
		a[k] = i;
	}
	for(int i = 1 ; i <= n ;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
