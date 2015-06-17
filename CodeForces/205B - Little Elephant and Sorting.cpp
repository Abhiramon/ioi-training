//11526213	2015-06-11 00:24:21	Hiasat98	205B - Little Elephant and Sorting	GNU C++	Accepted	498 ms	0 KB
#include <iostream>

using namespace std;

int main(){
	long long n , k , pr = 0, ans = 0 , toAdd = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> k;
		if(i > 0){
			int tk = k + toAdd;
			if(tk < pr){
				ans += pr - tk;
				toAdd += (pr -tk);
			}else{
				toAdd = 0;
				pr = k;
			}
		}else{
			pr = k;
		} 
	}
	cout << ans << endl;
	return 0;	
}
