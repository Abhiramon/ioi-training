//11057766	2015-05-09 23:14:14	Hiasat98	58A - Chat room	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	string r;
	cin >> r;
	string search = "hello";
	for(int i = 0 ; i < search.length();i++){
		int index = r.find(search.at(i));
		if(index == string::npos){
			cout << "NO" << endl;
			return 0;
		}
		r = r.substr(index + 1);
	}
	cout << "YES" << endl;
	return 0;
}
