//11489548 	2015-06-07 18:48:06 	Hiasat98 	279B - Books 	GNU C++ 	Accepted 	342 ms 	400 KB
#include <iostream>
using namespace std;

const int N = 100001;
int V[N] = {};

int main() {
    int n , t , l = 0 , r = 0 , b = 0 , s = 0;
    cin >> n >> t;
    for(int i = 0 ; i < n ; i++){
        cin >> V[i];
      	s+= V[i];
      	while(s > t){
      		s -= V[l++];
      	}
      	r = i - l + 1;
      	b = max(r,b);
    }
    cout << b << endl;
    return 0;
}
