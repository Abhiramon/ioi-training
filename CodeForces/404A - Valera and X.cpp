//11129639	2015-05-17 23:00:45	Hiasat98	404A - Valera and X	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    char x_char = 0;
    int chars[26] = {};
    int x_counter = 0;
    for(int i = 0 ; i < n ; i++){
        string r;
        cin >> r;
        if(i == 0){
            x_char = r.at(0);
        }
        for(int j = 0 ; j < n ; j++){
            int dd = (int) r.at(j) - 'a';
            chars[dd] = chars[dd] + 1;
        }
        int mid = n/2;
        if(mid == i){
            if(r.at(mid) != x_char){
                cout << "NO" << endl;
                return 0;
            }else x_counter++;
        }else{
            if(r.at(i) != x_char || r.at(n - i - 1) != x_char){
                cout << "NO" << endl;
                return 0;
            }else x_counter = x_counter + 2;
        }
    }
    int total = 0;
    int m = 0;
    for(int i = 0 ;i < 26;i++){
        if(chars[i] > 0){
            total++;
        }
        if(i == (int) (x_char - 'a')){
            m = chars[i];
        }
    }
    cout << ((total == 2 && m ==x_counter ) ? "YES" : "NO")  << endl;
    return 0;
}
