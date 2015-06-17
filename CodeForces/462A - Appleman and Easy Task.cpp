//11072891	2015-05-11 21:47:08	Hiasat98	462A - Appleman and Easy Task	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> v;
	string r;
	for(int i = 0 ; i < n ; i++){
		cin >> r;
		v.push_back(r);
	}
	bool work = true;
	for(int i = 0 ; i < n ; i++){
		string d = v[i];
		for(int x = 0; x < n ; x++){
			int k = 0;
			if(x + 1 < n && d.at(x + 1) == 'o'){
				k++;
			}
			if(x > 0 && d.at(x - 1) == 'o'){
				k++;
			}
			if(i > 0){
				string xx = v[i - 1];
				if(xx.at(x) == 'o'){
					k++;
				}
			}
			if(i + 1 < n){
				string xx = v[i + 1];
				if(xx.at(x) == 'o'){
					k++;
				}
			}
			if(k % 2 != 0){
				work = false;
			}
		}
	}
	cout << (work ? "YES" : "NO") << endl;
	return 0;
}
