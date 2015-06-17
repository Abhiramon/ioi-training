//11016469	2015-05-06 23:20:57	Hiasat98	11A - Increasing Sequence	GNU C++	Accepted	30 ms	
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n , d;
	cin >> n >> d;
	int v = 0, s = 0 ,p =0 , o = 0,y = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> v;
		if(i > 0 && p >= v){
			int x = (((p - v)/d) * d) + d;
			v += x;
			s += (x/d);
		}
		p = v;
	}
	cout << s << endl;
	
}
