//10973493	2015-05-02 13:57:20	Hiasat98	41A - Translation	GNU C++	Accepted	30 ms	2000 KB

#include <iostream>
using namespace std;

int main() {
	string first;
	string second;
	cin >> first;
	cin >> second;
	
        string reversed = "";
	for(int i = first.length() - 1;i >= 0 ; i--){
		reversed =reversed +first.at(i);
	}
        if(reversed == second){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
