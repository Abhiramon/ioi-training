//11449729 	2015-06-05 18:52:57 	Hiasat98 	31A - Worms Evolution 	GNU C++ 	Accepted 	60 ms 	0 KB 
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int n,a;

int main(){
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		v.push_back(a);
	}
	for(int a = 0 ; a < v.size();a++){
		for(int b =0 ; b < v.size();b++){
			for(int c = 0; c < v.size();c++){
				if(a !=c && a != b && b != c){
					if(v[a] == v[b] + v[c]){
						cout << a + 1 << " " << b + 1<< " " << c + 1 << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << -1 << endl;
	return 0;	
}
