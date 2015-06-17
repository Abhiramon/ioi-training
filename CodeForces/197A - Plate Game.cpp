//11450866	2015-06-05 20:50:18	Hiasat98	197A - Plate Game	GNU C++	Accepted	62 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int a , b , r;
	cin >> a >> b >> r;
	if(2 * r > a || 2 * r > b){
		cout << "Second" << endl;
	}else cout << "First" << endl;
	return 0;	
}
