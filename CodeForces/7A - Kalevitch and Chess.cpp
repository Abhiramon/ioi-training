//11013762	2015-05-06 17:22:12	Hiasat98	7A - Kalevitch and Chess	GNU C++	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;


int main() {
	int rx = 0;
	int cx = 0;
	for(int i = 0 ; i < 8 ;i++){
		string r;
		cin >> r;
		if(r == "BBBBBBBB"){
			rx++;
		}else{
			cx = 0;
			for(int x = 0 ; x < 8;x++)
				if(r.at(x) == 'B')
					cx++;
		}
	}

	if(rx < 8)
		rx += cx;
		
	cout << rx << endl;
	return 0;
}
