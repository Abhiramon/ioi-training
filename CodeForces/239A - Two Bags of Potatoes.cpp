//11270379	2015-05-25 23:47:44	Hiasat98	239A - Two Bags of Potatoes	GNU C++	Accepted	124 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int y , k , n;
	cin >> y >> k >> n;
	bool f = false;
	for(int i = k ; i <= n ; i += k){
		if(i <= n && i > y){
			cout << i - y << " ";
			f = true;
		}
	}
	if(!f)
		cout << -1 << endl;
}
