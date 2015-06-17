//11503797	2015-06-09 02:21:12	Hiasat98	357B - Flag Day	GNU C++	Accepted	93 ms	1600 KB
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int N = 100001;
int d[N][3] = {};
int c[N] = {};

int main(){
    int n , m;
    scanf("%d %d",&n,&m);
    for(int i = 0 ; i < m ; i++){
        scanf("%d %d %d",&d[i][0],&d[i][1],&d[i][2]);
        int u[4] = {};
        u[c[d[i][0]]]++;
        u[c[d[i][1]]]++;
        u[c[d[i][2]]]++;
        for(int j = 1 ; j <= 3 ; j++){
            if(u[j] == 0){
                for(int y = 0 ; y < 3 ; y++){
                    if(c[d[i][y]] == 0){
                        c[d[i][y]] = j;
                        break;
                    }
                }
            }
        }
    }
    for(int i = 1 ; i <= n ; i++){
        cout << c[i] << " ";
    }
    return 0;   
}
