//11451430	2015-06-05 21:56:52	Hiasat98	18A - Triangle	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector< pair<int,int> > p;

int d(int x , int y , int x1 , int y1){
	return (x  - x1) * (x - x1) + (y1 - y) * (y1 - y);
}
bool tri(int x , int y , int x1,int y1 , int x2 , int y2){
	int d1 = d(x1,y1,x2,y2);
	int d2 = d(x1,y1,x,y);
	int d3 = d(x2,y2,x,y);
	return d1 > 0 && d2 > 0 && d3 > 0 && d1 == d2 + d3;
}
int check(int x , int y , int x1 , int y1,int x2,int y2){
	return tri(x,y,x1,y1,x2,y2) || tri(x1,y1,x,y,x2,y2) || tri(x2,y2,x1,y1,x,y);
}
int main(){
	int c[6];
	for(int i = 0 ; i < 6 ; i++){
		cin >> c[i];
	}
	if(check(c[0],c[1],c[2],c[3],c[4],c[5])){
		cout << "RIGHT" << endl;
		return 0;
	}
	for(int i = 0 ; i < 6 ; i++){
		for(int j = 1 ; j >= -1 ; j-=2){
			c[i] += j;
			if(check(c[0],c[1],c[2],c[3],c[4],c[5])){
 				cout << "ALMOST" << endl;
				return 0;
			}
			c[i] -= j;
		}
	}
	cout << "NEITHER" << endl;
	return 0;	
}
