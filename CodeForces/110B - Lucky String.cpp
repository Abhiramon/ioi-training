//11511435	2015-06-09 17:46:42	Hiasat98	110B - Lucky String	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	string d = "abcd";
	for(int i = 0 ; i < n ; i++){
		int x = i % 4;
		cout << d.at(x);
	}
	return 0;	
}
