//11000229	2015-05-04 21:48:43	Hiasat98	456A - Laptops	GNU C++	Accepted	343 ms	0 KB
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;


int main(){
    int k;
    cin >> k;
    int maxP = 0;
    int maxQ = 0;11000229	2015-05-04 21:48:43	Hiasat98	456A - Laptops	GNU C++	Accepted	343 ms	0 KB
    for(int i = 0 ; i < k ;i++){
        int p = 0;
        int q = 0;
        cin >> p;
        cin >> q;
        if(p < q){
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
