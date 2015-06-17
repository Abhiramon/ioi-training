//11488738 	2015-06-07 17:34:56 	Hiasat98 	276B - Little Girl and Game 	GNU C++ 	Accepted 	30 ms 	0 KB 
#include <iostream>
using namespace std;

int main() {
    int a[26] = {};
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0 ; i < s.length();i++){
        a[s.at(i) - 'a']++;
    }
    for(int i = 0 ; i < 26 ;i++){
        if(a[i] % 2 == 1){
            cnt++;
        }
    }
    
    cout << ((cnt % 2 == 1 || cnt == 0) ? "First": "Second");
    return 0;
}


