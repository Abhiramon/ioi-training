//11626423 	2015-06-18 02:46:30 	Hiasat98 	401C - Team 	GNU C++ 	Accepted 	327 ms 	0 KB 
#include <iostream>

using namespace std;

const int N = 1000001;

int main(){
    int n , m , p = 1,tmp = 0;
    cin >> n >> m;
    if((n - 1) <= m && m <= 2 * (n + 1)){
        while(n > 0 || m > 0){
            if(!p || m > n && tmp < 2 ){
                tmp++;
                m--;
                p = 1;
            }else{
                n--;
                tmp = 0;
                p = 0;
            }

            cout << (char) (p + '0');
        }
    }else{
        cout << -1 << endl;
    }
    return 0;
}
