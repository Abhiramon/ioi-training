//11065355	2015-05-10 21:41:19	Hiasat98	313A - Ilya and Bank Account	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int toInt(string str){
	istringstream buffer(str);
	int val;
	buffer >> val;
	return val;
}
string toString(int a){
	stringstream x;
	x << a;
	return x.str();	
}
int main() {
   	int n;
   	cin >> n;
   	if(n > 0){
   		cout << n << endl;
   	}else{
   		string str = toString(n);
   		string temp = str;
   		int len = str.length();
   		cout << max(toInt(str.replace(len -1,1,"")),toInt(temp.replace(len - 2,1,""))) << endl;
   	}
	return 0;
}
