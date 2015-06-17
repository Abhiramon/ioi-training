//11138730	2015-05-18 23:25:17	Hiasat98	437A - The Child and Homework	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string a;
    int mn = 101;
    int mx = 0;
    vector<string> r;
    int min_index = 0;
    int max_index = 0;
    for(int i = 0 ; i < 4;i++){
        cin >> a;
        int len = a.length() - 2;
        mn = min(len , mn);
        if(mn == len)
            min_index = i;
        mx = max(len, mx);
        if(mx == len)
            max_index = i;
        r.push_back(a);
    }
    bool s = true;
    bool l = true;
    for(int i = 0 ; i < r.size();i++){
        int len = r[i].length() - 2;
        if(min_index != i && (mn * 2) > len){
            s = false;
        }
        if(max_index != i && (len * 2) > mx){
            l = false;
        }
    }

    string choices[] = {"A","B","C","D"};
    if(s && l || !s && !l){
        cout << "C" << endl;
    }else{
        if(s){
            cout << choices[min_index] << endl;
        }else if(l){
            cout << choices[max_index] << endl;
        }
    }
    return 0;
}
