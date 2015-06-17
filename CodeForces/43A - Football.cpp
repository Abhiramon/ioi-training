//11269326	2015-05-25 22:02:13	Hiasat98	43A - Football	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int aa = 0, bb = 0;
	string a,b;
	cin >> a;
	aa++;
	for(int i = 0 ; i < n -1 ; i++){
		string r;
		cin >> r;
		if(r == a){
			aa++;
		}else{
			b = r;
			bb++;
		}
	}
	cout << (aa > bb ? a : b) << endl;
	return 0;	
}
