//11064485	2015-05-10 19:50:12	Hiasat98	A - Expression	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a1, a2 , a3;
    cin >> a1 >> a2 >> a3;
    int ans = a1 + a2 * a3;
    ans = max(ans,a1 * a2 * a3);
    ans = max(ans,a1 * (a2 + a3));
    ans = max(ans,(a1 + a2) * a3);
    ans = max(ans,a1 + a2 + a3);
    cout << ans << endl;
    return 0;
}
