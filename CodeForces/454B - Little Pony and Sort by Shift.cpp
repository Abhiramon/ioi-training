//11092310	2015-05-13 22:02:01	Hiasat98	454B - Little Pony and Sort by Shift	GNU C++	Accepted	187 ms	400 KB
#include <iostream>

using namespace std;

int main() {
	int n,t=0,b = 0;
	cin >> n;
	long a[100002];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		if(i > 0 && a[i] < a[i-1]){
			t++;
			b = i;
		}
	}
	cout << (t == 0 ? 0 : (t == 1 && a[n -1] <= a[0] ? n - b: -1 )) << endl;
	return 0;
}
