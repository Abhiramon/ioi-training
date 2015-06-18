//11626888 	2015-06-18 04:47:33 	Hiasat98 	455A - Boredom 	GNU C++ 	Accepted 	202 ms 	2400 KB 
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 100001;
long long dp[N] = {},cnt[N] = {},A[N] = {};
long long sum = 0;

int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> A[i];
        cnt[A[i]]++;
        sum += A[i];
    }
    long long mx = 0;
    for(long long i = 1 ; i <= (N - 1) ; i++){
        if(i >= 2){
            dp[i] += max(dp[i - 1],dp[i - 2] + i * cnt[i]);
        }else{
            dp[i] = i * cnt[i];
        }
        if(dp[i] > mx){
            mx = dp[i];
        }
    }
    cout << mx << endl;
    return 0;
}
