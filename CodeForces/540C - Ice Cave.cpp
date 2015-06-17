//11146078	2015-05-19 18:49:04	Hiasat98	540C - Ice Cave	GNU C++	Accepted	124 ms	15800 KB
#include <iostream>

using namespace std;

int n,m;
int r,c;
int r1,c1;

char D[502][502];
int f = 0;

void dfs(int x,int y){
    if(D[x][y] == 'X') {
        if (x == r1 && y == c1)
            f = 1;;
    }else if(x >= 1 && x <= n && y >= 1 && y <= m){
        D[x][y] = 'X';
        dfs(x + 1 , y);
        dfs(x - 1 , y);
        dfs(x , y - 1);
        dfs(x , y + 1);
    }
}
int main(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        for(int x = 1 ; x <= m ; x++){
            cin >> D[i][x];
        }
    }
    cin >> r >> c;
    cin >> r1 >> c1;
    D[r][c] = '.';
    dfs(r,c);
    cout << (f == 0 ? "NO" : "YES") << endl;

    return 0;
}
