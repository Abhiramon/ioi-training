//11091068	2015-05-13 19:38:19	Hiasat98	508B - Anton and currency you all know	GNU C++	Accepted	31 ms	300 KB
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

long long toInt(string str){
	istringstream buffer(str);
	long long val;
	buffer >> val;
	return val;
}

int main()
{
	string n;
	cin >> n;
	int se = -1 , be = -1;
	int ld = ((int) n.at(n.length() - 1)) - ((int) '0');
	for(int i = 0 ; i < n.length() ; i++){
		int val = ((int) n.at(i)) - ((int) '0');
		if(val % 2 == 0 && se == -1 && val < ld ){
			se = i;
		}
		if(val % 2 == 0 && se == -1 && val > ld){
			be = i;
		}
	}
	if(se == -1 && be == -1){
		cout << -1 << endl;
	}else if(se != -1){
		swap(n[se],n[n.length() - 1]);
		cout <<  n << endl;;
	}else if(be != -1){
		swap(n[be],n[n.length() - 1]);
		cout << n << endl;
	}

	return 0;
}
