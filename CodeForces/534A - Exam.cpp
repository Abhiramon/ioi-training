//11039891	2015-05-08 12:18:56	Hiasat98	A - Exam	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 1 || n == 2){
        cout << "1" << endl;
        cout << "1" << endl;
    }else if(n == 3){
        cout << "2" << endl;
        cout << "1 3" << endl;
    }else{
        cout << n << endl;
    for(int i = n ;i >= 1;i--){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
    for(int i = n ;i >= 1;i--){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }
    cout << endl;
    }
    return 0;
}
