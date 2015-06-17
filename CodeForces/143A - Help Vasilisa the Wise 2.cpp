//11436143	2015-06-04 22:47:56	Hiasat98	143A - Help Vasilisa the Wise 2	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int r1,r2,c1,c2,d1,d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	for(int a = 1 ; a <= 9 ; a++){
		for(int b = 1 ; b <= 9 ; b++){
			for(int c = 1 ; c <= 9 ; c++){
				for(int d = 1 ; d <= 9 ; d++){
					if(a != b && a != c && a != d && b != c && b != d && c != d){
					if(a + b == r1 && d + c == r2){
						if(a + c == c1 && b + d == c2){
							if(a + d == d1 && b + c == d2){
								cout << a << " " << b << endl;
								cout << c << " " << d;
								return 0;
							}
						}
					}
					}
				}
			}
		}
	}
	cout << -1 << endl;
	return 0;	
}
