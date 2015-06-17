#include <cstdio>

using namespace std;


int main() {
	int d = 0,r = 0;
	while(scanf("%d",&d) && d > 0){
		int c = 0;
		r++;
		for(int i =  0 ; i < d ; i++){
			int k;
			scanf("%d",&k);
			if(k == 0) c++;
		}
		printf("Case %d: %d\n",r,(d - c) - c);
	}
	return 0;
}
