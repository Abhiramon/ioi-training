//11451714	2015-06-05 22:37:57	Hiasat98	374A - Inna and Pink Pony	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,m,i,j,a,b;
	cin >> n >> m >> i >> j >> a >> b;
	int aa[4] = {1,n,n,1};
	int bb[4] = {m,1,m,1};
	int cnt = -1;
	for(int k = 0 ;k < 4 ; k++){
		int x = aa[k];
		int y = bb[k];
		int dx = abs(x - i),dy = abs(y - j);
		if(dx % a == 0 && dy % b == 0 ){
			if((dx/a) % 2 == (dy/b) % 2){
				int r = max(dx/a,dy/b);
				if(cnt == -1)
					cnt = r;
				cnt = min(cnt,r);
			}
		}
	}
	if(cnt == -1 || (cnt > 0 && (n <= a || m <= b))){
		cout << "Poor Inna and pony!" << endl;
		return 0;
	}
	cout << cnt << endl;
	return 0;	
}
