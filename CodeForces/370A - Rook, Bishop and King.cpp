//11448694 	2015-06-05 17:19:05 	Hiasat98 	370A - Rook, Bishop and King 	GNU C++ 	Accepted 	15 ms 	0 KB 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int r1,c1,r2,c2;
	cin >> r1 >> c1 >> r2 >> c2;
	cout << ((r1 == r2 || c1 == c2) ? 1 : 2) << " ";
	if(((r1 + c1) % 2) != ((r2 + c2) % 2))
		cout << 0 << " ";
	else
		cout << (abs(r2 - r1) == abs(c2 - c1) ? 1 : 2) <<" ";
	cout << max(abs(r1 - r2),abs(c1 - c2));
	return 0;
}
