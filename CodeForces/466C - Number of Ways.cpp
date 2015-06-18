//11626198 	2015-06-18 02:04:52 	Hiasat98 	466C - Number of Ways 	GNU C++ 	Accepted 	1185 ms 	15700 KB
#include <iostream>

using namespace std;

const int N = 1000001;
long long A[N] = {},cnt[N] = {};

int main(){
    int n;
    cin >> n;
    long long s = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> A[i];
        s += A[i];
    }
    if(s % 3 != 0){
        cout << 0 << endl;
    }else{
        s /= 3;
        long long ss = 0;
        for(int i = n - 1; i >= 0 ; i--){
            ss += A[i];
            if(ss == s) {
                cnt[i] = 1;
            }
        }
        for(int j = n - 2 ; j >= 0 ; j--){
            cnt[j] += cnt[j + 1];
        }
        ss = 0;
        long long ans = 0;
        for(int i = 0 ; i+2 < n ; i++){
            ss += A[i];
            if(ss == s){
                ans += cnt[i + 2];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
