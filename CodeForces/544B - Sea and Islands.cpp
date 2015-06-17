//11099794	2015-05-14 18:05:42	Hiasat98	544B - Sea and Islands	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> v;
    for(int i  = 0 ; i < n ; i++){
        string o = "";
        for(int x = 0 ; x < n ; x++){
            if(i % 2 == 0){
                if(x % 2 == 0){
                    o += (k > 0 ? "L" : "S");
                    k--;
                }else o += "S";
            }else{
                if(x % 2 == 0)
                    o += "S";
                else {
                    o += (k > 0 ? "L" : "S");
                    k--;
                }
            }
        }
        v.push_back(o);
    }
    if(k <= 0){
        cout << "YES" << endl;
        for(int i = 0 ; i < v.size();i++){
            cout << v[i] << endl;
        }
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
