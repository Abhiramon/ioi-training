//11016269	2015-05-06 22:43:51	Hiasat98	10A - Power Consumption Calculation	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int p = 0;
	int n , p1 , p2 , p3 , t1 ,t2;
	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	int s,e;
	int le;
	for(int i = 0 ; i < n ; i++){
		cin >> s >> e;
		int l = e - s;
		if(i > 0){
			int x = s - le;
			if(x <= t1){
				p += x * p1;
			}else{
				p += t1 * p1;
				if(x-t1 <= t2){
					p += (x - t1) * p2;
				}else{
					p += t2 * p2;
 					p += (x - t2 - t1) * p3;
 				}
			}
		}
		p += l * p1;
		le = e;
	}
	cout << p << endl;
	return 0;
}
