//	2015-05-10 19:31:44	Hiasat98	337A - Puzzles	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	vector<int> puzzles;
	int p;
	for(int i = 0 ; i < m;i++){
		cin >> p;
		puzzles.push_back(p);
	}
	sort(puzzles.begin(),puzzles.begin() + puzzles.size());
	int ans = 1000;
	for(int i = n - 1; i <m ;i++){
		ans = min(ans, puzzles[i] - puzzles[i-n + 1]);
	}
	cout << ans << endl;
	return 0;
}
