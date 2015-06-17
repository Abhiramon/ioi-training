//11065856	2015-05-10 23:00:30	Hiasat98	510A - Fox And Snake	GNU C++	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	bool left = true;
	for(int i = 0 ; i < n ; i++){
		for(int x = 0 ; x < m ; x++){
			if(i % 2 == 0){
				cout << "#";
			}else{
				if((x == m-1 && left) || (!left && x == 0) ){
					cout << "#";
				}else cout << ".";
			}
		}
		if(i % 2 != 0){
			left = !left;
		}
		cout << endl;
	}

}
