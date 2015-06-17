//11134970	2015-05-18 15:50:43	Hiasat98	499A - Watching a movie	GNU C++	Accepted	30 ms	100 KB
#include <iostream>

using namespace std;

int n,x,s,e,c = 0,t = 0;

int main(){
    cin >> n >> x;
    for(int i = 0 ; i < n ; i++){
        cin >> s >> e;
        c += ((s - 1 - c)/x) * x;
        t += (e - c );
        c = e;
    }
    cout << t << endl;
}
