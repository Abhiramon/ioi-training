//11150237	2015-05-19 19:47:26	Hiasat98	545A - Toy Cars	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a;
    int v[101][101] = {};
    int r[101] = {};
    for(int i = 0 ; i < n ; i++){
        for(int x = 0 ; x < n ; x++){
            cin >> a;
            v[i][x] = a;
            if(a == 1 || a == 3)
                r[i]++;
        }
    }
    vector<int> p;
    for(int i = 0 ; i < n ; i++){
        if(r[i] == 0) {
            p.push_back(i + 1);
        }
    }
    cout << p.size()<< endl;
    for(int i = 0 ; i < p.size() ; i++){
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}
