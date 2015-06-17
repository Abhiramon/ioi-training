//11514978	2015-06-09 23:15:37	Hiasat98	151B - Phone Numbers	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

const int N = 101;

int T[N] = {},G[N] = {},P[N];
string na[N];

int main(){
	int n;
	cin >> n;
	int mxp = 0,mxt = 0,mxg = 0;
	for(int i = 0 ; i  < n ; i++){
		int k;
		cin >> k >> na[i];
		for(int j = 0 ; j < k ; j++){
			string a;
			cin >> a;
			bool pizza = true;
			bool taxi = true;
			int prev = a.at(0) - '0';
			for(int p = 1 ; p < a.length();p++){
				if(a.at(p) != '-'){
				int curr = a.at(p) - '0';
				if(curr != prev)
					taxi = false;
				if(curr >= prev)
					pizza = false;
				prev = curr;
				}
			}
			if(pizza){
				P[i]++;
				mxp = max(mxp,P[i]);
			}else if(taxi){
				T[i]++;
				mxt = max(mxt,T[i]);
			}else{
				G[i]++;
				mxg = max(mxg,G[i]);
			}
		}
	}
	int tt = 0,pp = 0, gg = 0;
	for(int i = 0 ; i < n ; i++){
		if(P[i] == mxp){
			pp++;
		}
		if(T[i] == mxt){
			tt++;
		}
		if(G[i] == mxg){
			gg++;
		}
	}
	cout << "If you want to call a taxi, you should call: ";
	for(int i = 0 ; i < n;i++){
		if(T[i] == mxt){
			tt--;
			cout << na[i]<< (tt > 0 ? ", " : "");
		}
	}
	cout << "." << endl;
	cout << "If you want to order a pizza, you should call: ";
	for(int i = 0 ; i < n;i++){
		if( P[i] == mxp){
			pp--;
			cout << na[i]<< (pp > 0 ? ", " : "");
		}
	}	
	cout << "." << endl;
	cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
	for(int i = 0 ; i < n;i++){
		if(G[i] == mxg){
			gg--;
			cout << na[i]<< (gg > 0 ? ", " : "");
		}
	}
	cout << "." << endl;
	return 0;	
}
