#include <cstdio>

using namespace std;

int main() {
	int init,s1,s2,s3,ans;
	while(scanf("%d %d %d %d",&init,&s1,&s2,&s3),init || s1 || s2 || s3){
		ans = 1080;
		ans += (init - s1) > 0 ? (init - s1) * 9 : (init - s1 + 40) * 9;
		ans += (s2 - s1) > 0 ? (s2 - s1) * 9 : (s2 - s1 + 40) * 9;
		ans += (s2 - s3) > 0 ? (s2 - s3) * 9 : (s2 - s3 + 40) * 9;
		printf("%d\n",ans);
	}
	return 0;
}
