//11258653	2015-05-25 00:36:31	Hiasat98	30A - Accounting	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a,b,n;
    cin >> a >> b >> n;
    for(int i = -1000;i <= 1000 ; i++){
        if(fabs(a*pow(i,n)-b)<0.01)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "No solution" << endl;
    return 0;
}
