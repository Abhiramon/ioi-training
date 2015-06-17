//11138741	2015-05-18 23:28:04	Hiasat98	282A - Bit++	GNU C++	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main() {
    int n,x = 0;
    cin >> n;
    string a;
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        if(a.find("--") == string::npos){
            x++;
        }else{
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
