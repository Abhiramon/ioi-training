//11486588	2015-06-07 15:02:39	Hiasat98	259B - Little Elephant and Magic Square	GNU C++	Accepted	30 ms	
#include <iostream>

using namespace std;

int main(){
	int m[3][3];
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3; j++){
			cin >> m[i][j];
		}
	}	
	for(int i = 1 ; i < 100001;i++){
		if(i + m[0][1] + m[2][1] == i + m[1][0] + m[1][2]){
			int t = i + m[0][1] + m[2][1];
			if(t == i + m[0][2] + m[2][0]){
				int a =  t - (m[2][0] + m[2][1]), b = t - (m[0][1] + m[0][2]);
				if(a > 0 && b > 0){
					m[1][1] = i;
					m[2][2] = a;
					m[0][0] = b;
					if(m[1][1] + m[2][2] + m[0][0] == t)
						break;
				}
			}
		}
	}
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}	
