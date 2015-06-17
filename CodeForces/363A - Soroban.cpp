//11275021	2015-05-26 10:41:24	Hiasat98	363A - Soroban	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <sstream>

using namespace std;

string toString(int t){
    stringstream buffer;
    buffer << t;
    return buffer.str();
}
int toInt(string r){
    istringstream f (r);
    int val;
    f >> val;
    return val;
}
int main() {
    int n;
    cin >> n;
    string r = toString(n);
    for(int i =  r.length() - 1 ; i >= 0;i--){
        string tt = "";
        tt += r.at(i);
        int x = toInt(tt);
        if(x >= 5){
            cout << "-O|";
            x -= 5;
        }else{
            cout << "O-|";
        }
        bool print = false;
        for(int u = 0 ; u < 5 ; u++){
            if(x > 0){
                cout << "O";
                x--;
            }else if(!print){
                cout << "-";
                print = true;
            }else{
                cout << "O";
            }
        }
        cout << endl;
    }
    return 0;
}
