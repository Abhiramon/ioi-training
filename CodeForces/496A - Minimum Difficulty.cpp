//11073461	2015-05-11 23:31:28	Hiasat98	496A - Minimum Difficulty	GNU C++	Accepted	31 ms	0 KB
#include <iostream>

using namespace std;

int main() {
	int n,k;
	cin >> n;
	int array [101] = {};
	for(int i = 0; i < n ; i++){
		cin >> k;
		array[i] = k;
	}
	int mm = 1001;
	for(int i = 1; i < n - 1;i++){
		int m = 0;
		for(int x = 0; x < n ; x++){
			if(x > 0 && x != i){
				int p = 0;
				if(x - 1 == i && x - 2 >= 0){
					p = array[x] - array[x - 2];
				}else{
					p = array[x] - array[x-1];
				}
				m = max(m,p);
			}
		}
		if(array[i] > 0)
			mm = min(mm,m);
	}
	cout << mm << endl;
	return 0;
}
