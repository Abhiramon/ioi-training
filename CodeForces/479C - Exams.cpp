//11626707 	2015-06-18 03:51:49 	Hiasat98 	479C - Exams 	GNU C++ 	Accepted 	46 ms 	100 KB 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector< pair<int,int > > v;

int main(){
    int n,a,b;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(),v.end());
    int ans = 1;
    for(int i = 0 ; i < v.size();i++){
        if(ans <= v[i].second){
            ans = v[i].second;
        }else{
            ans = v[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}
