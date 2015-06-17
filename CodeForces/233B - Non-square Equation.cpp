//11524994	2015-06-10 21:41:55	Hiasat98	233B - Non-square Equation	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

string toStr(long long i){
	stringstream buffer;
	buffer << i;
	return buffer.str();
}
long long s(long long i){
	long long sum = 0;
	string t = toStr(i);
	for(int i = 0 ; i < t.length() ; i++){
		sum += t.at(i) - '0';
	}
	return sum;
}

int main() {
	long long n;
	cin >> n;
	int x = sqrt(n);
	for(long long i = x - 100;i <= x; i++){
		int sum = s(i);
		if((sum * i) + (i * i) - n == 0){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
