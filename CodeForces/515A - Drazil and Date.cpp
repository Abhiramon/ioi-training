//11250924	2015-05-24 14:05:09	Hiasat98	515A - Drazil and Date	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int a , b , s , k;

int main(){
	cin >> a >> b >> s;
	k = abs(a) + abs(b);
	cout << (s >= k && (s - k)%2== 0 ?"Yes":"No");
}
