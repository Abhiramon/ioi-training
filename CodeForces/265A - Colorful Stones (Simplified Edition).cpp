//11136832	2015-05-18 18:52:15	Hiasat98	265A - Colorful Stones (Simplified Edition)	GNU C++	Accepted	62 ms	
#include <iostream>

using namespace std;

string f,s;


int main(){
    cin >> f >> s;
    int pos = 0;
    for(int i = 0 ; i < s.length();i++){
        if(f.at(pos) == s.at(i)){
            pos++;
        }
    }
    cout << (pos + 1) << endl;
}
