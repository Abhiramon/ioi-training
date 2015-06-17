//11134607	2015-05-18 15:18:49	Hiasat98	233A - Perfect Permutation	GNU C++	Accepted	30 ms	100 KB
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        for(int i = n ; i > 0 ; i--){
            cout << i << " ";
        }
    }else{
        cout << -1 << endl;
    }
}
