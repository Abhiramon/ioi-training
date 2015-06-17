//10997919	2015-05-04 20:06:54	Hiasat98	514A - Chewbaсca and Number	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


int main(){
    string c;
    cin >> c;
    string r = "";
    for(int i = 0 ; i < c.length();i++){
        int number = (int) c.at(i)  - (int) '0' ;
        if(number >= 5){
            if(number == 9 && i == 0){
                number = number;
            }else{
                number = 9 - number;
            }
        }
        r += (char) number + '0';
    }
    cout << r << endl;
    return 0;
}
