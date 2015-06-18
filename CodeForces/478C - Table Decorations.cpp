//11627004 	2015-06-18 05:09:59 	Hiasat98 	478C - Table Decorations 	GNU C++ 	Accepted 	30 ms 	0 KB 
#include <iostream>
using namespace std;

long long ans = 0;

int main(){
    long long r , g , b;
    cin >> r >> g >> b;
    ans = min(min(g + r , min(g + b,r + b)),(r + g + b)/3);
    cout << ans << endl;
    return 0;
} 
