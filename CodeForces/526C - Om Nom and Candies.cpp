//11107440	2015-05-15 16:16:11	Hiasat98	526C - Om Nom and Candies	GNU C++	Accepted	31 ms	0 KB
#include <iostream>

using namespace std;

int main(){
    long long c,ha,hb,wa,wb;
    cin >> c >> ha >> hb >> wa >> wb;
    long long ans = 0;
    for(int i = 0 ; i < 100000;i++){
        if(i * wa <= c)
            ans = max(ans,i * ha + ((c - i * wa)/wb) * hb);
        if(i * wb <= c)
            ans = max(ans,i * hb + ((c - i * wb)/wa) * ha);
    }
    cout << ans << endl;
}
