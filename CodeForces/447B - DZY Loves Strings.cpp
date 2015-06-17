//11091375	2015-05-13 20:03:47	Hiasat98	447B - DZY Loves Strings	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string n;
	cin >> n;
	int k,val;
	cin >> k;
	int array[27] = {};
	int m = 0;
	for(int i =0 ; i < 26 ; i++){
		cin >> val;
		array[i] = val;
		m = max(m,val);
	}
	int total = 0;
	for(int i = 1 ; i <= n.length() + k  ; i++){
		if(i <= n.length() ){
			int val = array[(((int) n.at(i - 1)) - ((int) 'a')) ];
			total += val * i;
		}else{
			total += m * i;
		}
	}
	cout << total << endl;
	return 0;
}
