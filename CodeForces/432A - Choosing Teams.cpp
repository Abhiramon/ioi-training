//11066053	2015-05-10 23:37:53	Hiasat98	432A - Choosing Teams	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	int k;
	cin >> n >> k;
	int count = 0;
	int val;
	for(int i = 0; i < n ;i++){
		cin >> val;
		if(5 -  val >= k){
			count++;
		}
	}
	cout << (count /  3) << endl;
}
