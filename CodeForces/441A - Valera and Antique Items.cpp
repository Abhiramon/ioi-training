//11072747	2015-05-11 21:26:20	Hiasat98	441A - Valera and Antique Items	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> s;
	int n , v;
	cin >> n >> v;
	int k;
	int val;
	for(int i = 1 ; i <= n;i++){
		cin >> k;
		bool found = false;
		for(int x = 0; x < k ; x++){
			cin >> val;
			if(v > val && !found){
				s.push_back(i);
				found = true;
			}
		}
	}
	cout << s.size() << endl;
	for(int  i = 0 ; i < s.size();i++){
		cout << s[i] << " ";
	}
	cout << endl;
	return 0;
}
