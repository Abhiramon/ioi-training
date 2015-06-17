//10999992	2015-05-04 21:14:22	Hiasat98	110A - Nearly Lucky Number	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

string toString(int r){
    ostringstream ss;
    ss << r;
    return ss.str();
}


int main(){
    string n;
    cin >> n;
    int count = 0;
    for(int i = 0 ; i < n.length();i++){
        if(n.at(i) == '7' || n.at(i) == '4') 
            count++;
    }
    string c = toString(count);
    for(int i = 0 ; i < c.length();i++){
        if(c.at(i) != '7' && c.at(i) != '4') {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
