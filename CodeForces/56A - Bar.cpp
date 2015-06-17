//11449624 	2015-06-05 18:42:22 	Hiasat98 	56A - Bar 	GNU C++ 	Accepted 	30 ms 	0 KB 
#include <iostream>
#include <sstream>

using namespace std;

int n,cnt = 0;
string r,drinks[11] = { "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

bool drink(string r){
	for(int i = 0 ; i< 11;i++){
		if(drinks[i] == r){
			return true;
		}
	}
	return false;
}
int toInt(string r){
	istringstream buffer(r);
	int val;
	buffer >> val;
	return val;
}
int main(){
	cin >> n;
	for(int i = 0 ; i < n;i++){
		cin >> r;
		if(isalpha(r.at(0))){
			if(drink(r)){
				cnt++;
			}
		}else{
			if(toInt(r) < 18){
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;	
}
