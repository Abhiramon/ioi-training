//11070144	2015-05-11 15:31:47	Hiasat98	266B - Queue at the School	GNU C++	Accepted	62 ms	0 KB
#include <iostream>

using namespace std;

int main(){
    int n ,t;
    cin >> n >> t;
    string in;
    cin >> in;
    while(t > 0){
        string tmp = in;
        for(int i = 0 ; i < tmp.length();i++){
            if(tmp.at(i) == 'B' && i  + 1 < tmp.length()){
                if(tmp.at(i + 1) == 'G'){
                    in.replace(i,1,"G");
                    in.replace(i + 1, 1 , "B");
                }
            }
        }
        t--;
    }
    cout << in << endl;
    
}
