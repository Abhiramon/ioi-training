//10974304	2015-05-02 15:22:46	Hiasat98	71A - Way Too Long Words	GNU C++	Accepted	30 ms	2000 KB
#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		string c;
		cin >> c;
		if(c.length() > 10)
		cout << c.at(0) << c.length() -2 << c.at(c.length() - 1) << endl;
		else cout << c << endl;
	}
	return 0;
}

