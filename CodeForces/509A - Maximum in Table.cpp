//11000144	2015-05-04 21:35:06	Hiasat98	509A - Maximum in Table	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;


int main(){
    int k;
    cin >> k;
    int t[k][k];
    int max = 0;
    for(int i = 0 ; i < k;i++){
        for(int j = 0; j < k;j++){
            if(j == 0 || i == 0){
                t[i][j] = 1;
                max = 1;
            }else if(i == 1){
                t[i][j] = j + 1;
                max = j + 1;
            }else{
                int sum = 0;
                for(int d = 0 ; d <= j;d++){
                    sum += t[i -1][d];
                }
                t[i][j] = sum;
                if(max < sum){
                    max = sum;
                }
            }
        }
    }
    cout << max << endl;
    return 0;
}
