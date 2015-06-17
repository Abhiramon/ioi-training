//10974593	2015-05-02 15:57:00	Hiasat98	540A - Combination Lock	GNU C++	Accepted	31 ms	2000 KB
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int stringToInt(string str){
  int value;
  istringstream buffer(str);
  buffer >> value;
  return value;
}

int min_movements(int curr,int target){
 int t = curr - target;
 if(t < 0)
 	t = -1 * t;
 return t <= 5 ? t : 9 -  t + 1;
}

string toString(char c){
	string a = "";
	a += c;
	return a;
}

int main() {
	int n = 0;
	cin >> n;
	
	string orginal;
	cin >> orginal;
	
	string target;
	cin >> target;
	
	int total = 0;
	for(int i = 0 ; i < target.length();i++){
		int a =  stringToInt(toString(target.at(i)));
		int b =  stringToInt(toString(orginal.at(i)));
		total += min_movements(a,b);
	}

	cout << total << endl;
	return 0;
}
