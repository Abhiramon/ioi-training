//11450689	2015-06-05 20:32:15	Hiasat98	305A - Strange Addition	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string toString(int r){
    stringstream buff;
    buff << r;
    return buff.str();
}

int t = -1;
int c = -1;

int main(){
    int n,a;
    vector<int> f;
    cin >> n;
    int used[1000] = {};
    for(int i = 0; i < n ; i++){
        cin >> a;
        int index = toString(a).find_last_of("0");
        if(used[index] == 0 && index != string::npos){
            f.push_back(a);
            used[index]++;
        }else{
            if(a < 10){
            	t = a;
            }else{
            	c = a;
            }
        }
    }
    if(t != -1){
    	f.push_back(t);
    }else{
    	if(used[1] == 0 && c != -1){
    		f.push_back(c);
    	}
    }
    int cnt = f.size();
    cout << cnt << endl;
    for(int i = 0 ; i < f.size();i++){
    	cout << f[i] << " ";
    }
    cout << endl;
    return 0;
}
