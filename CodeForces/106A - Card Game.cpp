//11437488	2015-06-05 00:42:19	Hiasat98	106A - Card Game	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;

int rank(char a){
	string r = "6789TJQKA";
	return r.find(a);
}
int main(){
	char h;
	cin >> h;
	string a , b;
	cin >> a >> b;
	if(a.at(1) == b.at(1)){
		int r1 = rank(a.at(0));
		int r2 = rank(b.at(0));
		if(r1 > r2){
			cout << "YES" << endl;
			return 0;
		}
	}else if(a.at(1) == h && b.at(1) != h){
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;	
}
