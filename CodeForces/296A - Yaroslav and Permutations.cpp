//11269724	2015-05-25 22:42:44	Hiasat98	296A - Yaroslav and Permutations	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int d[1001] = {};

int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        v.push_back(a);
        d[a]++;
    }   
    for(int i = 0 ; i < 1001;i++){
        if(d[i] > (n + 1)/2){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
