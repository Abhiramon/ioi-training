//11121198	2015-05-17 01:31:21	Hiasat98	527B - Error Correct System	GNU C++	Accepted	78 ms	800 KB
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	string f,s;
	cin >> f >> s;
	int st = 0;
	int d = 0;
	int characters[26][26] = {};
	for(int i = 0 ; i < f.length();i++){
		if(f.at(i) != s.at(i)){
			characters[f.at(i) - 'a'][s.at(i) - 'a'] = i + 1;
			d++;
		}
	}
	int ham = d;
	int first_index = -1,second_index = -1;
	for(int i = 0 ; i < 26 ; i++){
		for(int x = 0 ; x < 26 ; x++){
			int r = characters[i][x];
			int tmp = d;
			if(r > 0){
				int fs =  -1;
				int ss = -1;
				for(int o = 0 ; o < 26 ; o++){
					for(int p = 0 ; p < 26 ; p++){
						tmp = d;
						int u = characters[o][p];
						if(u > 0){
							if(p == i && o == x){
								fs = r;
								ss = u;
								tmp = tmp -2;
							}else if(o == x || p == i){
								fs = r;
								ss = u;
								tmp--;
							}
							
						}
						if(tmp < ham){
							ham = tmp;
							first_index = fs;
							second_index = ss;
						}
					}
				}
			}
		}
	}
	cout << ham << endl;
	cout << (ham == d ? -1 : first_index) << " " << (ham == d ? -1 : second_index) << endl;
	return 0;
}
