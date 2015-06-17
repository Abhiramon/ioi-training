#include <cstdio>
#include <cstring>

using namespace std;


int main() {
	int t,d,k = 0;
	scanf("%d",&t);
	for(int i = 0; i <t;i++){
		char s[128];
		scanf("%s",&s);
		if(s[0] == 'd'){
			scanf("%d",&d);
			k += d;
		}else{
			printf("%d\n",k);
		}
	}
	return 0;
}
