//11349907	2015-05-29 22:10:04	Hiasat98	377A - Maze	GNU C++	Accepted	109 ms	15300 KB
#include <iostream>
#include <vector>

using namespace std;

int n , m , k;
vector<string> v;

int f = 0;
bool visited[501][501];

vector< pair<int,int> > h;

void clearVisisted(){
    for(int i = 0 ; i < 501;i++){
        for(int x = 0 ; x < 501;x++){
            visited[i][x] = false;
        }
    }   
}

pair<int,int> findDot(){
    for(int ux = 0 ; ux < n ; ux++){
        for(int uy = 0 ; uy < m ; uy++){
            if(v[ux].at(uy) =='.'){
                return make_pair(ux,uy);    
            }
        }
    }
    return make_pair(-1,-1);
}
void DFS(int x, int y){
    if(x < 0 || y < 0 || y >= m || x >= n || visited[x][y] || v[x].at(y) != '.')
        return;
     visited[x][y] = true;
     DFS(x + 1, y);
     DFS(x,y + 1);
     DFS(x - 1,y);
     DFS(x,y - 1);
     h.push_back( make_pair(x,y));
     f++;
}

int main() {
    cin >> n >> m >> k;
    int c = 0;
    for(int i = 0 ; i < n ; i++){
        string r;
        cin >> r;
        v.push_back(r);
        for(int x = 0 ; x < r.length();x++){
            if(r.at(x) == '.')
                c++;
        }
    }
    pair<int,int> dot = findDot();
    DFS(dot.first,dot.second);
    
    for(int i = 0; i < h.size();i++){
        if(k == 0)
            break;
        pair<int,int> p1 = h[i];
        v[p1.first].at(p1.second) = 'X';
        k--;
    }
    for(int x = 0 ; x < n ; x++){
        for(int y = 0; y < m ; y++){
            cout << v[x].at(y);
        }
        cout << endl;
    }
    
    return 0;
}
