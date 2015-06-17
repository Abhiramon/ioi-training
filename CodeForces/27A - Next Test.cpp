//11444015	2015-06-05 12:39:43	Hiasat98	27A - Next Test	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int a[3002] = {};

int main() {
	int n;
	cin >> n;
	for(int i = 0 ;i < n ;i++){
		int x;
		cin >> x;
		a[x]++;
	}	
	for(int i = 1 ; i <= 3001;i++){
		if(a[i] == 0){
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
