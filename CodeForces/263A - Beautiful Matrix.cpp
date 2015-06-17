//11062167	2015-05-10 14:11:43	Hiasat98	263A - Beautiful Matrix	GNU C++	Accepted	30 ms	0 KB
include <iostream>
#include <cmath>
using namespace std;

int main() {
    int col = 0;
    int row = 0;
    int k = 0;
    for(int c = 0 ; c < 5 ; c++){
        for(int r = 0 ; r < 5 ; r++){
            cin >> k;
            if(k != 0){
                col = c;
                row = r;
                break;
            }
        }
    }
    int distance = abs(col - 2) + abs(row - 2);
    cout << distance << endl;
    return 0;
}
