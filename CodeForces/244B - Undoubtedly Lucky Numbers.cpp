//11594457 	2015-06-15 15:52:53 	Hiasat98 	244B - Undoubtedly Lucky Numbers244B - Undoubtedly Lucky Numbers 	GNU C++ 	Accepted 	30 ms 	1300 KB 
#include <iostream>
#include <set>

using namespace std;

long long i , j , n;
set<long long> s1;

void dfs(long long x,int y){
	if(x > n || y > 10)
		return;
	s1.insert(x);
	dfs(x*10 + i, y +1);
	dfs(x*10 + j, y +1);
}

int main(){
	cin >> n;
	for( i = 0 ; i <= 9;i++)
		for( j = i+1 ; j <= 9;j++)
			dfs(0,0);
		
	cout << s1.size() - 1 << endl; // remove leading zero
	return 0;	
}
