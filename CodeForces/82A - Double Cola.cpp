//11414684	2015-06-04 17:12:33	Hiasat98	82A - Double Cola	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string names[5] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
	while(n > 5){
		n =(n/2) - 2;
	}
	cout << names[n - 1] << endl;
	return 0;
}
