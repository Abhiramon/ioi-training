//11013890	2015-05-06 17:38:32	Hiasat98	8A - Train and Peter	GNU C++	Accepted	92 ms	500 KB
#include <iostream>
#include <vector>

using namespace std;

bool foundPath(string str , string first , string second){
	int in = str.find(first);
	if(in !=string::npos){
		str = str.substr(in + first.length(),str.length() - in - 1);
		
		if(str.find(second) != string::npos){
			return true;
		}
	}
	return false;
}

int main() {
	string p,fs,ss;
	cin >> p >> fs >> ss;
	
	bool forward = foundPath(p,fs,ss);
	string r = "";
	for(int i = p.length()-1 ; i >= 0;i--){
		r += p.at(i);
	}
	bool backward = foundPath(r,fs,ss);
	

	if(forward && backward){
		cout << "both" << endl;
	}else if(forward){
		cout << "forward" << endl;
	}else if(backward){
		cout << "backward" << endl;
	}else{
		cout << "fantasy" << endl;
	}
	return 0;
}
