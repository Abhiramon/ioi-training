//11159131	2015-05-19 20:35:42	Hiasat98	545B - Equidistant String	GNU C++	Accepted	62 ms	500 KB
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string s;
    string t;
    cin >> s >> t;
    int changes = 0;
    string result = "";
    for(int i = 0 ; i < s.length();i++){
        if(s.at(i) == t.at(i)){
            result += s.at(i);
        }else if(s.at(i) != t.at(i)){
            if(changes % 2 == 0){
                result += s.at(i);
            }else{
                result += t.at(i);
            }
            changes++;
        }
    }
    cout << (changes % 2 == 1 ? "impossible" : result) << endl;
    return 0;
}
