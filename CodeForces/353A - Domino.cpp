//11137350	2015-05-18 19:48:26	Hiasat98	353A - Domino	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int n,sum_l = 0,sum_u = 0 , d_p = 0, l ,u;

int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> l >> u;
        if(l % 2 != u % 2){
            d_p++;
        }
        sum_l += l;
        sum_u += u;
    }

    if(sum_l % 2 == 0 && sum_u % 2 == 0){
        cout << 0 << endl;
    }else if(d_p % 2 == 0 && d_p > 0){
        cout << 1 << endl;
    }else cout << -1 << endl;

}
