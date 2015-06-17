//11451972	2015-06-05 23:10:55	Hiasat98	390A - Inna and Alarm Clock	GNU C++	Accepted	280 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int x[101] = {};
int y[101] = {};

int mx = 0;
int my = 0;
int main(){
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int a , b;
		cin >> a >> b;
		x[a]++;
		y[b]++;
	}
	for(int i = 0 ; i < 101 ; i++){
		if(y[i] > 0){
			my++;
		}
		if(x[i] > 0){
			mx++;
		}
	}
	cout << min(mx,my) << endl;
	return 0;	
}
