//10997782	2015-05-04 19:52:12	Hiasat98	234A - Lefthanders and Righthanders	GNU C++	Accepted	30 ms	200 KB
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int n;
    string r;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> n;

    char a[101];
    for(int i=0;i<n;i++){
        cin>>a[i];
        r += a[i];
    }
    
    vector< pair<int,string> > p;
    for(int i = 1 ; i < n + 1;i++){
        string x =  "";
        x += r.at(i - 1);
        p.push_back( pair<int,string>(i,x));
    }
        for(int i = 0 ; i < n/2 ;i++){
            pair<int,string> x = p[i];
            pair<int,string> x1 =p[n/2 + i];
            if(x.second == "R" && x1.second == "L"){
                cout << x1.first << " " << x.first << endl; 
            }else{
                cout << x.first << " " << x1.first << endl; 
            }
    
        }
    return 0;
}
