//11065941	2015-05-10 23:16:36	Hiasat98	25A - IQ test	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int le = 0, lo = 0,co = 0,k;
	for(int i = 0 ; i < n ; i++){
		cin >> k;
		if(k % 2 == 0){
			le = i;
		}else{
			co++;
			lo = i;
		}
	}
	le += 1;
	lo += 1;
	cout << (co == 1 ? lo : le) << endl;
}
