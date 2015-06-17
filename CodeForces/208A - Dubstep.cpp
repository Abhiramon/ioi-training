//11063891	2015-05-10 18:39:56	Hiasat98	208A - Dubstep	GNU C++	Accepted	60 ms	
#include <iostream>
using namespace std;

int main() {
    string r;
    cin >> r;
    int index = r.find("WUB");
    while(index != string::npos){
        if(index == 0 || index == r.length() - 2 || r.at(index - 1) == ' '){
            r.replace(index,3,"");          
        }else{
            r.replace(index,3," ");
        }
        index = r.find("WUB");
    }
    cout << r << endl;
    return 0;
}
