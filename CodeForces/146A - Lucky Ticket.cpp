//11349967	2015-05-29 22:16:27	Hiasat98	146A - Lucky Ticket	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string r;
	cin >> r;
	int t = 0;
	bool lucky = true;
	for(int i = 0; i < r.length();i++){
		if(r.at(i) !='7' && r.at(i) != '4')
			lucky = false;
		if(i < r.length() / 2){
			t += r.at(i);
		}else{
			t -= r.at(i);
		}
	}
	cout << (n % 2 == 0 && t == 0 && lucky ? "YES" : "NO") << endl;
	return 0;
}
