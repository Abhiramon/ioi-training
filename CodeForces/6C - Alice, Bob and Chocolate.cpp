//11138592	2015-05-18 22:56:30	Hiasat98	6C - Alice, Bob and Chocolate	GNU C++	Accepted	374 ms	400 KB
#include <iostream>

using namespace std;

int n,a = 0 ,b = 0;
int array[100001];

int main() {
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> array[i];
    }
    int L = 0;
    int R = n -1;
    a = array[L];
    b = array[R];
    int e_a = 0;
    int e_b = 0;
    while(L < R){
        if(a == 0){
            L++;
            a = array[L];
            e_a++;
        }
        if(b == 0){
            R--;
            b = array[R];
            e_b++;
        }
        a--;
        b--;
    }
    if(b < a  && L == R){
        e_b++;
    }else if(b >= a  && L == R){
        e_a++;
    }
    cout << e_a << " " << e_b << endl;
    return 0;
}
