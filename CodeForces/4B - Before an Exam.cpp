//11497719	2015-06-08 15:37:59	Hiasat98	4B - Before an Exam	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int  d , sum ,mn = 0, mx = 0,T[30] = {},T2[30] = {};
	cin >> d >> sum;
	for(int i = 0 ; i < d ; i++){
		int a , b;
		cin >> a >> b;
		mn += a;
		mx += b;
		T[i] = a;
		T2[i] = b;
	}
	if(sum < mn || sum > mx){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
		sum -= mn;
		for(int i = 0 ; i < d; i++){
			if(sum > 0){
				if(sum >= (T2[i] - T[i])){
					sum -= T2[i] - T[i];
					T[i] = T2[i];
				}else{
					T[i] += sum;
					sum = 0;
				}
			}
			cout << T[i] << " ";
		}
	}
	return 0;
}
