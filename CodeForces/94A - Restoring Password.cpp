//11350375	2015-05-29 23:03:44	Hiasat98	94A - Restoring Password	GNU C++	Accepted	62 ms	0 KB
#include<iostream>

using namespace std;

int main(){
    string r;
    cin >> r;
    string x[10] = {};
    for(int i = 0 ; i < 10 ; i++){
        cin >> x[i];
    }
    string pass = "";
    for(int j = 0; j < 8;j++){
        string d = r.substr(j * 10 , 10);
        for(int y = 0 ; y < 10 ; y++){
            if(x[y] == d){
                pass +=( y  + '0');
            }
        }
    }
    cout << pass << endl;
}
