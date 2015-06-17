//11057816	2015-05-09 23:24:55	Hiasat98	122A - Lucky Division	GNU C++	Accepted	60 ms	0 KB
#include <iostream>
#include <sstream>

using namespace std;

string tostring(int val){
    stringstream ss;
    ss << val;
    return ss.str();
}

bool isLuckyNumber(string r){
    for(int i = 0; i < r.length(); i++){
        if(r.at(i) != '7' && r.at(i) != '4'){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    string r = tostring(n);
    for(int i = 0 ; i < 1001;i++){
        if(isLuckyNumber(tostring(i))){
            if(n % i == 0){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
