//11064573	2015-05-10 20:00:35	Hiasat98	443A - Anton and Letters	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    cin.ignore();
    int count = 0;
    for(int i = 'a' ; i <= 'z';i++){
        if(s.find(i) != string::npos){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
