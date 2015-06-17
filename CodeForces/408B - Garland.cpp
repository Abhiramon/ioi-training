//11503741	2015-06-09 02:01:52	Hiasat98	408B - Garland	GNU C++	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	string a,b;
	int A[1001] = {},B[1001] = {},ans = 0;
	cin >> a >> b;
	for(int i = 0 ; i < a.length();i++) A[a.at(i) - 'a']++;
	for(int i = 0 ; i < b.length();i++) B[b.at(i) - 'a']++;
	for(int i = 0 ; i < 26;i++){
		int x = A[i];
		int y = B[i];
		if(x == 0 && y > 0){
			cout << -1 << endl;
			return 0;
		}else if(x >= y){
			ans += y;
		}else{
			ans += x;
		}
	}
	cout << ans << endl;
	return 0;	
}
