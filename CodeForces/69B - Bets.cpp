//11620484 	2015-06-17 16:56:05 	Hiasat98 	69B - Bets 	GNU C++ 	Accepted 	60 ms 	0 KB
#include <iostream>

using namespace std;

const int N = 100;
int L[N],R[N],T[N],C[N];

int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 0 ; i < m;i++){
        cin >> L[i] >> R[i] >> T[i] >> C[i];
    }
    int ans = 0;
    for(int i = 1 ; i <= n ; i++){
        int mn = 1e9,t = 0;
        for(int j = 0 ; j < m ; j++) {
            if (i >= L[j] && i <= R[j]) {
                if(T[j] < mn){
                    t = C[j];
                    mn = T[j];
                }
            }
        }
        ans += t;
    }
    cout << ans << endl;
    return 0;
}
