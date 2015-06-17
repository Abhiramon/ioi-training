//11080893	2015-05-12 21:03:05	Hiasat98	467B - Fedor and New Game	GNU C++	Accepted	31 ms	100 KB
#include <iostream>
#include <vector>

using namespace std;

string toBinary(int n){
	string r = "";
	while(n > 0){
		r = (n % 2 == 0 ? "0":"1") + r;
		n /= 2;
	}
	return r;
}

int compare(string one,string two){
	while(one.length() < two.length()){
		one = "0" + one;
	}
	while(two.length() < one.length()){
		two = "0" + two;
	}
	int total = 0;
	for(int i = 0 ; i < one.length();i++){
		if(one.at(i) != two.at(i))
			total ++;
	}
	return total;
}
int main(){
	int n , m, k;
	cin >> n >> m >> k;
	int val;
	vector<string> l;
	string f;
	for(int i = 1 ; i <= m + 1; i++){
		cin >> val;
		if(i == m + 1)
			f = toBinary(val);
		else
			l.push_back(toBinary(val));
	}
	int count = 0;
	for(int i = 0 ; i < l.size();i++){
		if(compare(l[i],f) <= k){
			count++;
		}
	}
	cout << count << endl;
	
}
