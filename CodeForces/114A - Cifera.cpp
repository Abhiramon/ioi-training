//11137460	2015-05-18 20:04:30	Hiasat98	114A - Cifera	GNU C++	Accepted	60 ms	0 KB
#include <iostream>

using namespace std;

long long k ,l;

int main(){
    cin >> k >> l;
    int n = 0;
    while(l % k == 0){
        l /= k;
        n++;
    }
    if(l == 1){
        cout << "YES" << endl;
        cout << (n-1) << endl;
    }else cout << "NO" << endl;
    return 0;
}
