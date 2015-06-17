//11450985	2015-06-05 21:04:19	Hiasat98	35A - Shell Game	GNU C++	Accepted	30 ms	200 KB
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin >> n;
	int a , b;
	while(cin >> a >> b){
		if(a == n){
			n = b;
		}else if(b == n){
			n = a;
		}
	}
	cout << n << endl;
	return 0;	
}
