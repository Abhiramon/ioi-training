//11451148	2015-06-05 21:21:45	Hiasat98	88A - Chord	GNU C++	Accepted	62 ms	0 KB
#include <iostream>
#include <stdio.h>

using namespace std;

string notes[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

int dist(string s,string e){
	int si = 0,ei = 0;
	for(int i = 0 ; i < 12; i++){
		if(s == notes[i]){
			si = i;
		}
		if(e == notes[i]){
			ei = i;
		}
	}
	return (si > ei ? 12 - si + ei : (ei - si));
	
}
int main(){
	string n[3];
	cin >> n[0] >> n[1] >> n[2];
	for(int a = 0 ; a < 3 ; a++){
		for(int b = 0 ;b < 3 ; b++){
			for(int c = 0 ; c < 3 ; c++){
				if(a != b && b != c){
					if(dist(n[a],n[b]) == 4 && dist(n[b],n[c]) == 3){
						cout << "major" << endl;
						return 0;
					}
					if(dist(n[a],n[b]) == 3 && dist(n[b],n[c]) == 4){
						cout << "minor" << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << "strange" << endl;
	return 0;	
}
