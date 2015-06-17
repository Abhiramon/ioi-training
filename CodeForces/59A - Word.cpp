//	2015-05-29 22:49:52	Hiasat98	59A - Word	GNU C++	Accepted	62 ms	0 KB
#include<iostream>

using namespace std;

int main(){
	string r;
	cin >> r;
	int l = 0;
	int uu = 0;
	for(int i = 0 ; i < r.length();i++ ){
		if(r.at(i) >= 'a' && r.at(i) <= 'z'){
			l++;
		}else uu++;
	}
	bool u = uu > l;
	string rr = "";
	for(int i = 0 ; i < r.length();i++){
		if(u){
			if(r.at(i)  >= 'a' && r.at(i)  <= 'z'){
				rr+= (char) r.at(i) - 32;
			}else rr += r.at(i);
		}else{
			if(r.at(i) >= 'A' && r.at(i) <= 'Z'){
				rr += (char) r.at(i) + 32;
			}else rr += r.at(i);
		}
	}
	cout << rr << endl;
}
