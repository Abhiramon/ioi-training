//11132972	2015-05-18 11:59:37	Hiasat98	493A - Vasya and Football	GNU C++	Accepted	15 ms	0 KB
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string toString(int r){
  stringstream buffer;
  buffer << r;
  return buffer.str();
}
int main() {
	string h , r;
	cin >> h >> r;
	int n;
	cin >> n;
	int first_team_numbers[100] = {};
	int second_team_numbers[100] = {};
	int f_t_m[100] = {};
	int s_t_m[100] = {};
	vector<string> fouls;
	for(int i = 0 ; i < n ; i++){
		int m,np;
		string team,foul;
		cin >> m >> team >> np >> foul;
		if(team == "h"){
			if(first_team_numbers[np] < 2){
				if(foul == "r"){
					first_team_numbers[np] = first_team_numbers[np] + 2;
				}else{
					first_team_numbers[np]++;
				}
				if(first_team_numbers[np] >= 2){
					fouls.push_back(h + " " + toString(np) + " " + toString(m));
				}
			}
		}else if(team == "a"){
			if(second_team_numbers[np] < 2){
				if(foul == "r"){
					second_team_numbers[np] = second_team_numbers[np] + 2;
				}else{
					second_team_numbers[np]++;
				}
				if(second_team_numbers[np] >= 2){
					fouls.push_back(r + " " + toString(np) + " " + toString(m));
				}
			}
		}
	}
	for(int i = 0 ; i < fouls.size();i++){
		cout << fouls[i] << endl;
	}
	return 0;
}
