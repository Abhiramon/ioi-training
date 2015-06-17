//11350568	2015-05-29 23:30:09	Hiasat98	134A - Average Numbers	GNU C++	Accepted	405 ms	3100 KB
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v;
	vector<int> out;
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		int a;
		cin >> a;
		sum += a;
		v.push_back(a);
	}
	int cnt = 0;
	for(int i = 0 ; i < n ; i++){
		if(v[i] * n == sum){
			cnt++;
			out.push_back(i + 1);
		}
	}
	cout << cnt << endl;
	for(int i = 0 ; i < out.size();i++){
		cout << out[i] << " ";
	}
	
}
