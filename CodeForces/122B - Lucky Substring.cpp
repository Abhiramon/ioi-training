//11498630	2015-06-08 16:59:57	Hiasat98	122B - Lucky Substring	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int a,b = 0;
int main(){
   	string k;
   	cin >> k;
   	for(int i = 0 ; i < k.length();i++){
   		int x = k.at(i) - '0';
   		if(k.at(i) == '4') a++; else if(k.at(i) == '7') b++;
   	}
   	if(a == 0 && b == 0)
   		cout << -1 << endl;
   	else
   		cout << (max(a,b) == a ? "4" : "7")<< endl;
    return 0;   
}
