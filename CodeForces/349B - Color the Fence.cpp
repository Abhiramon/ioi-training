//11513883	2015-06-09 21:00:26	Hiasat98	349B - Color the Fence	GNU C++	Accepted	62 ms	2100 KB
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int l[10] = {};
	int len = 0,mn = 0,in = 0;
	for(int i = 1 ; i < 10 ; i++){
		cin >> l[i];
		if(l[i] <= mn || mn == 0){
			mn = l[i];
			len = n/l[i];
			in = i;
		}
	}
	if(len == 0){
		cout << -1 << endl;
	}else{
		string x = "";
		n -= mn * len;
		for(int i = 1 ; i < 10 ; i++){
			l[i] -= mn;
		}
		for(int i = 0 ; i < len ; i++){
			int mx = in;
			for(int j = 1 ; j < 10 ; j++){
				if(n == 0)
					break;
				if(j > mx && n >= l[j]){
					mx = j;
				}
			}
			n -= l[mx];
			x += (mx + '0');
		}
		cout << x << endl;
	}
	return 0;	
}
