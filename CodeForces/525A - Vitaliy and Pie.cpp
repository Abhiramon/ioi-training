//11124104	2015-05-17 11:28:31	Hiasat98	A - Vitaliy and Pie	GNU C++	Accepted	61 ms	500 KB
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string r;
	cin >> r;
	int lc[26] = {};
	int t = 0;
	for(int i = 0 ; i < r.length();i++){
		if(r.at(i) >= 'a' && r.at(i) <= 'z'){
			int x = r.at(i) - 'a';
			lc[x]++;
		}
		if(r.at(i) >= 'A' && r.at(i) <= 'Z'){
			int y = r.at(i) - 'A';
			int keys = lc[y];
			if(keys > 0){
				lc[y]--;
			}else{
				t++;
			}
		}
	}

	cout << t << endl;
	return 0;
}
