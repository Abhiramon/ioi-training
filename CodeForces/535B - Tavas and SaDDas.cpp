//	2015-05-04 16:12:29	Hiasat98	535B - Tavas and SaDDas	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int toInt(string r){
    int val;
    istringstream buffer(r);
    buffer >> val;
    return val;
}
string toString(int r){
    ostringstream ss;
    ss << r;
    return ss.str();
}
string generate(string r , int x){
    string d = "";
    for(int i = 0 ; i < x ; i++){
        d += r;
    }
    return d;
}
int findNext(int curr){
  string r = toString(curr);
  int four = r.find_last_of("4");
  
  if(four != string::npos){
    if(four + 1 < r.length() && r.at(four + 1) == '7'){
        int l = r.length() - four - 1;
         r.replace(four + 1, l, generate("4",l));   
         r.replace(four,1,"7"); 
         
    }else{
        r.replace(four,1,"7");
    }
  }else{
    int len = r.length() + 1;
    r = "";
    for(int x = 0 ; x < len;x++){
        r += '4';
    }
  }
  return toInt(r);
}
int main() {
    
    int n;
    cin >> n;
    
    int index = 1;
    int curr = 4;
    while(curr != n){
        curr = findNext(curr);
        index++;
    }
    
    cout << index << endl;
    return 0;
}
