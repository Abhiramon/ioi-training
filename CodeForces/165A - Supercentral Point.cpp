//11135121	2015-05-18 16:02:31	Hiasat98	165A - Supercentral Point	GNU C++	Accepted	62 ms	100 KB
#include <iostream>
#include <vector>

using namespace std;

int n,l,r,u,d,x,y,t = 0;
vector< pair<int,int> > v;


int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y;
        v.push_back( make_pair(x,y));
    }
    for(int i = 0 ; i < n ; i++){
        pair<int,int> p = v[i];
        r = 0,l = 0 , u = 0,d = 0;
        for(int j = 0 ; j < n ; j++){
            if(j != i) {
                pair<int,int> c = v[j];
                if(c.first > p.first && c.second == p.second){
                    r++;
                }
                if(c.first < p.first && c.second == p.second){
                    l++;
                }
                if(c.first == p.first && c.second > p.second){
                    u++;
                }
                if(c.first == p.first && c.second < p.second){
                    d++;
                }
            }
        }
        if(r > 0 && l > 0 && u > 0 && d > 0){
            t++;
        }
    }
    cout << t << endl;
}
