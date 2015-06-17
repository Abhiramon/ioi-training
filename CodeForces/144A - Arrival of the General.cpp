//11062446	2015-05-10 14:55:44	Hiasat98	144A - Arrival of the General	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max = 0,min = 100,k;
    int max_index = 0;
    int min_index = 0;
    for(int i = 0 ; i < n ;i++){
        cin >> k;
        if(k > max){
            max = k;
            max_index = i;
        }
        if(k <= min){
            min = k;
            min_index = i;
        }
    }
    int total = 0;
    int r = max_index - min_index;
    if(max_index > min_index){
        max_index--;
    }
    total = n -1 -min_index + max_index;
    cout << total << endl;
    return 0;
}

