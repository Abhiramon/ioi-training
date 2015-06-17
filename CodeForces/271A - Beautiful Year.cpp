//11349361	2015-05-29 21:08:36	Hiasat98	271A - Beautiful Year	GNU C++	Accepted	60 ms	0 KB
#include <iostream>
#include <sstream>
 
using namespace std;

string toString(int r){
	stringstream buffer;
	buffer << r;
	return buffer.str();
}

int main() {
	int n;
	cin >> n;
	for(int i = n + 1 ; i < 10000;i++){
		int cnt[10] = {};
		string y = toString(i);
		for(int x = 0; x < y.length();x++){
			cnt[y.at(x) - '0']++;
		}
		bool goodYear = true;
		for(int i = 0 ; i < 10 ; i++){
			if(cnt[i] > 1)
				goodYear = false;
		}
		if(goodYear){
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
