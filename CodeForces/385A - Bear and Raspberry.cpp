//11073142	2015-05-11 22:27:03	Hiasat98	385A - Bear and Raspberry	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n , c;
	cin >> n >> c;
	int k;
	int max = 0;
	int array[101] = {};
	for(int i = 0; i < n ; i++){
		cin >> k;
		array[i] = k;
		if(i > 0){
			int prev = array[i -1];
			int p = prev - k;
			if(p > max){
				max = p;
			}
		}
	}
	int ans = (max - c);
	cout << (ans < 0 ? 0 : ans) << endl;
	return 0;
}
