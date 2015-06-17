//11502479	2015-06-08 22:28:01	Hiasat98	133B - Unary	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

string c = "><+-.,[]";

const int N = 1000000 + 3;
int main(){
	string r;
	cin >> r;
	int ans = 0;
	for(int i = 0 ; i < r.length() ; i++){
		ans = ans * 16 + 8 + c.find(r.at(i));
		ans %= N;
	}
	cout << ans << endl;
    return 0;   
}
