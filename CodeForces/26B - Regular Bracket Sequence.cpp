//11357593	2015-05-30 16:58:37	Hiasat98	26B - Regular Bracket Sequence	GNU C++	Accepted	342 ms	2100 KB
#include <iostream>
using namespace std;

int main() {
	string r;
	cin >> r;
	int t = 0;
	int x = 0;
	for(int i = 0 ; i < r.length();i++){
		if(r.at(i) == '('){
			t++;
			x++;
		}
		if(r.at(i) == ')' && x > 0){
			x--;
		}
	}
	cout << ((t - x) * 2) << endl;
	return 0;
}
