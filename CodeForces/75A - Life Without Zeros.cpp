//11269415	2015-05-25 22:10:14	Hiasat98	75A - Life Without Zeros	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <sstream>

using namespace std;

int toInt(string r){
	istringstream buffer (r);
	int val;
	buffer >> val;
	return val;
}
string toString(int r){
	stringstream s;
	s << r;
	return s.str();
}
string removeZero(string r){
	string d = "";
	for(int i = 0 ; i < r.length();i++){
		if(r.at(i) != '0'){
			d += r.at(i);
		}
	}
	return d;
}

int main(){
	string a , b;
	cin >> a >> b;
	int c = toInt(a) + toInt(b);
	cout << (toInt(removeZero(a)) + toInt(removeZero(b)) == toInt(removeZero(toString(c))) ? "YES" : "NO") << endl;
	return 0;
}
