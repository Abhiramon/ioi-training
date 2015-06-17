//11081612	2015-05-12 23:01:01	Hiasat98	451B - Sort the Array	GNU C++	Accepted	249 ms	1000 KB
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> r;
	int val;
	int s = -1 , e = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> val;
		r.push_back(val);
		if(i > 0 && s == -1){
			if(r[i - 1] > val){
				s = i ;
			}
		}
	}
	for(int i = n - 1 ;i >= 0 ; i--){
		val = r[i];
		if(i - 1 >= 0 && val < r[i - 1]){
			e = i + 1;
			break;
		}
	}
	

	if(s < 0 || e < 0){
		s = 1;
		e = 1;
	}
	reverse(r.begin() + (s - 1) , r.begin() + e);
	bool sorted = true;
	for(int i = 0 ; i < r.size();i++){
		if(i > 0 && r[i] < r[i -1]){
			sorted = false;
		}
	}

	cout << (sorted ? "yes" :"no") << endl;
	if(sorted && e <= 0 || s <= 0){
		s = 1;
		e = 1;
	}
	if(sorted)
		cout << s << " " << e << endl;
}
