//11619215 	2015-06-17 15:12:27 	Hiasat98 	374B - Inna and Nine 	GNU C++ 	Accepted 	30 ms 	300 KB
#include <iostream>

using namespace std;

const int N = 100001;
int main(){
    string c;
    cin >> c;
    long long t = 1,ans = 1;
    for(int i = 1 ; i < c.length() ; i++){
       if((c.at(i - 1) - '0') + (c.at(i) - '0') == 9){
            t++;
       }else{
           if(t % 2) ans *= t/2 + 1;
            t = 1;
       }
    }
    if(t % 2) ans *= t/2 + 1;
    cout << ans << endl;
    return 0;
}
