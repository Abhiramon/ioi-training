//11437397	2015-06-05 00:30:06	Hiasat98	194A - Exams	GNU C++	Accepted	60 ms	0 KB
#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int e = n * 2;
	while(e < k){
		n--;
		e += 1;
	}
	cout << (n < 0 ? 0 : n) << endl;
	return 0;	
}
