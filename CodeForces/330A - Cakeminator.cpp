//11069900	2015-05-11 15:09:59	Hiasat98	330A - Cakeminator	GNU C++	Accepted	30 ms	0 KB
#include <iostream>
#include <vector> 

using namespace std;

int main() {
	int r , c;
	cin >> r >> c;
	int t = 0;
	string in;
	vector<string> rows;
	for(int i = 0 ; i < r ; i++){
		cin >> in;
		if(in.find("S") == string::npos){
			t += c;
		}else{
			rows.push_back(in);
		}
	}
	for(int i = 0 ; i < c ; i++){
		string d = "";
		for(int x = 0; x < rows.size() ; x++){
			d += rows[x].at(i);
		}
		if(d.find("S") == string::npos){
			t += d.length();
		}
	}
	cout << t << endl;
	return 0;
}
