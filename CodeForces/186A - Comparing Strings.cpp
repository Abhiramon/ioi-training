//11436354	2015-06-04 22:58:13	Hiasat98	186A - Comparing Strings	GNU C++	Accepted	92 ms	700 KB
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	string d1 = "";
	string d2 = "";
	if(a.length() != b.length()){
		cout << "NO" << endl;
		return 0;
	}
	for(int i = 0 ; i < a.length();i++){
		if(a.at(i) != b.at(i)){
			d1 += a.at(i);
			d2 += b.at(i);
		}
	}
	if(d1.length() == 2){
		if(d1.at(0) == d2.at(1) && d1.at(1) == d2.at(0)){
			cout << "YES" << endl;
			return 0;
		}		
	}
	cout << "NO" << endl;
	return 0;	
}
