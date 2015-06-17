//11023699	2015-05-07 19:45:46	Hiasat98	544A - Set of Strings	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k;
    cin >> k;
    string l;
    cin >> l;
    vector <string> v;
    string r = "";
    int temp = 0;
    if(k > l.length() ){
        cout << "NO" << endl;
        return 0;
    }else{
        int contain[26] = {};
        for(int i = 0 ; i < l.length();i++){
            char c = l.at(i);
            int ci = (int) c - 'a';
            if(temp >= k){
                r += c;
            }else if(contain[ci] == 0){
                if(r.length() > 0)
                    v.push_back(r);
                r = "";         
                r += c;
                temp+=1;
                contain[ci] = 1;
            }else{
                r += c;
            }
        }
    }
    if(r.length() > 0)
        v.push_back(r);
        
    string dd =  ((temp >= k) ? "YES" : "NO") ;
    cout << dd << endl;
    if(dd != "NO"){
    for(int i = 0 ; i < v.size();i++){
        cout << v[i] << endl;
    }
    }
    return 0;
}
