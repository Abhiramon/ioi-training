//11130040	2015-05-18 00:22:50	Hiasat98	534B - Covered Path	GNU C++	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main(){
    int v1,v2,t,d;
    cin >> v1 >> v2 >> t >> d;
    int ans = 0;
    for(int i = 0 ; i < t; i++){
        ans += min(v1+d*i,v2 + d*(t-i-1));
    }
    cout << ans << endl;
    return 0;
}
