//11073501	2015-05-11 23:39:51	Hiasat98	255A - Greg's Workout	GNU C++	Accepted	30 ms	0 K
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int ch = 0;
	int bc = 0;
	int bk = 0;
	int k;
	for(int i = 1 ; i <= n ; i++){
		cin >> k;
		if(i % 3 == 1){
			ch += k;
		}else if(i % 3 == 2){
			bc += k;
		}else if(i % 3 == 0){
			bk += k; 
		}
	}
	int m = max(max(ch,bc),bk);
	if(m == ch){
		cout << "chest" << endl;
	}else if(m == bk){
		cout << "back" << endl;
	}else{
		cout << "biceps" << endl;
	}
	return 0;
}
