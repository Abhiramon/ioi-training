//11138673	2015-05-18 23:13:15	Hiasat98	526A - King of Thieves	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string r;
    cin >> r;
    for(int i = 0 ; i < n;i++){
        for(int j = 1 ; j <= n ; j++){
            bool good = true;
            for(int x = 0 ; x < 5; x++){
                if((i + x * j) > n - 1){
                    good = false;
                    break;
                }
                if(r.at((i + x * j)) == '.'){
                    good = false;
                    break;
                }
            }
            if(good){
                cout << "yes" << endl;
                return 0;
            }
        }
    }
    cout << "no" << endl;
    return 0;
}
