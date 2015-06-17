//10977478	2015-05-02 22:05:58	Hiasat98	535A - Tavas and Nafas	GNU C++	Accepted	31 ms	2000 KB

#include <iostream>
using namespace std;

int main(){
	int n;
	string first[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
	string second[] = {"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	string thiry[] = {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

	cin >> n;
	if(n >= 20){
		int r = n / 10;
		int x = n % 10;
		cout << thiry[r - 2];
		if(x > 0){
			cout << "-" << first[x] << endl;
		}else{
			cout << endl;			
		}
	}else if(n > 10){
		cout << second[n - 10 - 1];
	}else{
		cout << first[n];
	}
}
