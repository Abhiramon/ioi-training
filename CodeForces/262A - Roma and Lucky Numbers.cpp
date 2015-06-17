//11135217	2015-05-18 16:10:32	Hiasat98	262A - Roma and Lucky Numbers	GNU C++	Accepted	62 ms	100 KB
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int n,k,tmp,ans = 0;

string toString(int r){
    stringstream s;
    s << r;
    return s.str();
}
int main(){
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++){
        cin >> tmp;
        string x = toString(tmp);
        int t = 0;
        for(int j = 0 ; j < x.length();j++){
            if(x.at(j) == '7' || x.at(j) == '4'){
                t++;
            }
        }
        if(t <= k){
            ans++;
        }
    }
    cout << ans;
}
