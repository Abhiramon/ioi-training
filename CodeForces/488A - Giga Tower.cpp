//11137911	2015-05-18 21:04:34	Hiasat98	488A - Giga Tower	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <sstream>

using namespace std;

long long f, b = 1;

string toString(int val){
    stringstream buffer;
    buffer << val;
    return buffer.str();
}
int main() {
    cin >> f;
    f += 1;
    while(toString(f).find("8") == string::npos){
        f += 1;
        b += 1;
    }
    cout << b << endl;
    return 0;
}
