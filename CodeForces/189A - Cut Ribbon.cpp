//11136066	2015-05-18 17:30:47	Hiasat98	189A - Cut Ribbon	GNU C++	Accepted	156 ms	0 KB
#include <iostream>

using namespace std;

int n , a , b , c;

int main(){
    cin >> n >> a >> b >> c;
    int ans = 0;
    for(int i = 0 ; i <= n ; i++){
        for(int x = 0 ; x <= n ; x++){
            int z = (n - ((i * a) + (x * b))) / c;
            int m = i * a + x * b + z * c;
            if(m == n && z >= 0 && x >= 0 && i >= 0){
                ans = max(ans,i + x + z);
            }
        }
    }
    cout << ans << endl;
}
