//11057503	2015-05-09 22:21:00	Hiasat98	118A - String Task	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>
#include <string> 

using namespace std;

int main(){
    string input;
    cin >> input;
    transform(input.begin(),input.end(),input.begin(), ::tolower);
    string r = "";
    for(int i = 0 ; i < input.length();i++){
        char a = input.at(i);
        if(a != 'a' &&  a != 'o' && a != 'y' && a != 'e' && a != 'u' && a != 'i'){
            r = r + "." + a;
        }
    }
    cout << r << endl;
}
