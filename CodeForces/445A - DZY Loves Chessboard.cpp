//11269258	2015-05-25 21:54:18	Hiasat98	445A - DZY Loves Chessboard	GNU C++	Accepted	31 ms	0 KB
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int r , c;
	cin >> r >> c;
	bool white = true;
	vector<string> v;
	for(int x = 0 ; x < r; x++){
		string r = "";
		for(int y = 0 ; y < c ; y++){
			char a;
			cin >> a;
			if(a == '-'){
				r+= "-";
			}else if(y % 2 == 0){
				r += (white ? "W" : "B");
			}else{
				r += (white ? "B" : "W");
			}		
		}
		v.push_back(r);
		white = !white;
	}
	for(int i = 0 ; i < v.size();i++){
		cout << v[i] << endl;
	}
	return 0;
}
