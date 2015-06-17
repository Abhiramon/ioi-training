//11063756	2015-05-10 18:22:03	Hiasat98	451A - Game With Sticks	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    
    int r = min(m,n);
    cout << ((r % 2 == 0) ? "Malvika" : "Akshat");
    return 0;
}
