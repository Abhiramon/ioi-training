//11520579	2015-06-10 14:39:36	Hiasat98	437B - The Child and Set	GNU C++	Accepted	15 ms	100 KB
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int sum , limit;
	cin >> sum >> limit;
	vector<int> ans;
	for(int i = limit ; i > 0 ; i--){
		int q = i & -i;
		if(sum > 0 && sum >= q){
			sum -= q;
			ans.push_back(i);
		}
	}
	if(sum == 0){
		cout << ans.size() << endl;
		for(int j = 0 ; j < ans.size();j++){
			cout << ans[j] << " ";
		}
		cout << endl;
	}else{
		cout << -1 << endl;
	}
	return 0;
}
