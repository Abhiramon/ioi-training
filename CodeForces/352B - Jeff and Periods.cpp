//11499211	2015-06-08 17:51:52	Hiasat98	352B - Jeff and Periods	GNU C++	Accepted	934 ms	1600 KB
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int N = 100002;

int L[N] = {};
int M[N] = {};
int C[N] = {};
int F[N] = {};

int main(){
  	int n,k,cnt = 0;
  	cin >> n;
  	for(int i = 1 ;i <= n ; i++){
  		cin >> k;
  		if(C[k] == 0){
  			L[k] = i;
  			cnt++;
  		}else{
  			if(M[k] > 0 && i - L[k] != M[k] && F[k] != -1){
  				F[k] = -1;
  				cnt--;
  			}
  			M[k] = i - L[k];
  			L[k] = i;
  		}
  		C[k]++;
  	}
  	cout << cnt << endl;
  	for(int i = 1 ; i < N;i++){
  		if(C[i] > 0 && F[i] != -1){
  			cout << i << " " << M[i] << endl;
  		}	
  	}
    return 0;   
}
