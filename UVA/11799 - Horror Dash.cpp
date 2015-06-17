#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int t,n,k,mx = 0;
	scanf("%d",&t);
	for(int i = 1 ; i <= t;i++){
		mx = 0;
		scanf("%d",&n);
		for(int x = 0 ; x < n;x++){
			scanf("%d",&k);
			mx = max(mx,k);
		}
		printf("Case %d: %d\n",i,mx);
	}
	return 0;
}
