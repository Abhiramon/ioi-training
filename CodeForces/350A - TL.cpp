//11136365	2015-05-18 18:04:13	Hiasat98	350A - TL	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int n , m , v = 101,mv = 0,p = 101;

int main(){
    cin >> n >> m;
    int tmp;
    for(int i = 0 ; i <  n ; i++){
        cin >> tmp;
        v = min(v,tmp);
        mv = max(mv,tmp);
    }
    for(int i = 0 ; i < m ; i++){
        cin >> tmp;
        p = min(p,tmp);
    }

    if(max(2 * v ,mv) < p){
        cout << max(2 * v,mv) << endl;
    }else cout << -1 << endl;
}
