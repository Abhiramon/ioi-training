#include <cstdio>
#include <cstring>

using namespace std;


int main() {
	int t,l,w,h;
	scanf("%d",&t);
	for(int i = 0 ; i < t;i++){
		scanf("%d %d %d",&l,&w,&h);
		printf("Case %d: ",i + 1);
		if(l > 20 || w > 20 || h > 20)printf("bad\n");
		else printf("good\n");
	}
	return 0;
}
