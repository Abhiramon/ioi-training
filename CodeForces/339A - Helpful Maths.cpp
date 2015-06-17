//11057646	2015-05-09 22:48:08	Hiasat98	339A - Helpful Maths	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main(){
	string s;
	cin >> s;
	vector <char> v;
	for(int i = 0 ; i <  s.length();i++){
		if(s.at(i) != '+')
	    	v.push_back(s.at(i) );
	}
	sort(v.begin(),v.end());
	string r = "";
	for(int i = 0 ; i < v.size();i++){
			r = r + v[i] + "+";
	}
	if(r.at(r.length() - 1) == '+'){
		r.replace(r.length() -1 , 1 ,"");
	}
	cout << r << endl;
}
