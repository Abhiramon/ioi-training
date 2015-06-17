//11488126	2015-06-07 16:48:09	Hiasat98	432B - Football Kit	GNU C++	Accepted	639 ms	2500 KB
#include <iostream>
#include <vector>
using namespace std;

const int N = 100001;

vector< pair<int,int> > v;


int h[N] = {};

int main(){
    int n;
    cin >> n;
    int g = (n - 1);
    for(int i = 0 ; i < n ; i++){
        int k,t;
        cin >> k >> t;
        h[k]++;
        v.push_back( make_pair(k,t));
    }
    for(int i = 0 ; i < n ; i++){
        int first = v[i].first, second = v[i].second;
        cout <<  (g + h[second]) << " " << (g - h[second]) << endl;
    }   
    return 0
