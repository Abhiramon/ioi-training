//11436739	2015-06-04 23:21:52	Hiasat98	108A - Palindromic Times	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;

int toInt(string str){
	istringstream s (str);
	int val;
	s >> val;
	return val;
}
string toString(int r){
	stringstream b;
	b << r;
	return b.str();
}
int main(){
	string a;
	cin >> a;
	string b ="";
	b += a.at(0);
	b += a.at(1);
	string c = "";
	c +=  a.at(3);
	c +=  a.at(4);
	int h = toInt(b),m = toInt(c) + 1;
	for(int hh = h ; hh < 24;hh++){
		for(int mm = m ; mm < 60;mm++){
			string mmm = toString(mm);
			if(mmm.length() == 1){
				mmm ='0' + mmm;
			}
			string hhh = toString(hh);
			if(hhh.length() == 1){
				hhh = '0' + hhh;
			}
			string in = hhh;
			in += mmm;;

			if(in == string(in.rbegin(),in.rend())){
				cout << hhh << ":" << mmm  << endl;
				return 0;
			}
		}
		m = 0;
		if(h == 23){
			h = 0;
			hh = -1;
		}
	}
	return 0;	
}
