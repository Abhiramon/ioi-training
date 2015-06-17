//11070536	2015-05-11 16:14:08	Hiasat98	339B - Xenia and Ringroad	GNU C++	Accepted	372 ms	0 KB
#include <iostream>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    long long total = 0;
    long long prev = 0;
    long long  k;
    for(int i = 0 ; i < m ; i++){
        cin >> k;
        if(i == 0){
            total -= 1;
        }
        if(k >= prev){
            total += (k - prev);
        }else{
            total += (n - prev) + k;
        }
        prev = k;
    }
    cout << total << endl;
}
