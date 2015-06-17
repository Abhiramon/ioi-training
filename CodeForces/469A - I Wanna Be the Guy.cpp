//11064653	2015-05-10 20:09:48	Hiasat98	469A - I Wanna Be the Guy	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int p;
    int q;
    int val;
    vector<int> v;
    cin >> p;
    for(int i = 0 ; i < p ; i++){
        cin >> val;
        v.push_back(val);
    }
    cin >> q;
    for(int i = 0 ; i < q; i++){
        cin >> val;
        v.push_back(val);
    }
    bool found = false;
    for(int i = 1; i <= n;i++){
        found = false;
        for(int x = 0 ; x < v.size();x++){
            if(v[x] == i){
                found = true;
                break;
            }
        }
        if(!found){
            break;
        }
    }
    cout << (found ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}
