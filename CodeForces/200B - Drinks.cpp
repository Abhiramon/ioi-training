//11350582	2015-05-29 23:33:20	Hiasat98	200B - Drinks	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
	double d = 0;
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		double x;
		cin >> x;
		d += x;
	}
	d /= n;
	printf("%9f",d);
}
